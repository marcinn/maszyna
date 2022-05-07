﻿/*
This Source Code Form is subject to the
terms of the Mozilla Public License, v.
2.0. If a copy of the MPL was not
distributed with this file, You can
obtain one at
http://mozilla.org/MPL/2.0/.
*/

#include "station.h"

#include "DynObj.h"
#include "mtable.h"
#include "stdafx.h"

namespace simulation {

basic_station Station;

}

// exchanges load with consist attached to specified vehicle, operating on
// specified schedule
double basic_station::update_load(
    TDynamicObject *First, Mtable::TTrainParameters &Schedule,
    int const Platform) {
    // TODO: filter out maintenance stops when determining first and last stop
    auto const firststop{Schedule.StationIndex == 1};
    auto const laststop{Schedule.StationIndex == Schedule.StationCount};
    // HACK: determine whether current station is a (small) stop from the
    // presence of "po" at the name end
    auto const stationname{
        Schedule.TimeTable[Schedule.StationIndex].StationName};
    auto const stationequipment{
        Schedule.TimeTable[Schedule.StationIndex].StationWare};
    auto const trainstop{
        ((ends_with(stationname, "po")) || (contains(stationequipment, "po")))};
    auto const maintenancestop{(contains(stationequipment, "pt"))};
    // train stops exchange smaller groups than regular stations
    // NOTE: this is crude and unaccurate, but for now will do
    auto const stationsizemodifier{(trainstop ? 1.0 : 2.0)};
    // go through all vehicles and update their load
    // NOTE: for the time being we limit ourselves to passenger-carrying cars
    // only
    auto exchangetime{0.f};

    auto *vehicle{First};
    while (vehicle != nullptr) {
        auto &parameters{*vehicle->MoverParameters};

        if (parameters.Doors.range == 0.f) {
            goto next;
        }

        if (parameters.LoadType.name.empty()) {
            // (try to) set the cargo type for empty cars
            parameters.LoadAmount = 0.f;  // safety measure against edge cases
            parameters.AssignLoad("passengers");
            parameters.ComputeMass();
        }

        if (parameters.LoadType.name == "passengers") {
            // NOTE: for the time being we're doing simple, random load change
            // calculation
            // TODO: exchange driven by station parameters and time of the day
            auto unloadcount = static_cast<int>(
                TestFlag(parameters.DamageFlag, dtrain_out)
                    ? parameters.LoadAmount
                : laststop        ? parameters.LoadAmount
                : firststop       ? 0
                : maintenancestop ? 0
                                  : std::min<float>(
                                        parameters.LoadAmount,
                                        Random(
                                            parameters.MaxLoad * 0.15f *
                                            stationsizemodifier)));
            auto loadcount = static_cast<int>(
                TestFlag(parameters.DamageFlag, dtrain_out) ? 0
                : laststop                                  ? 0
                : maintenancestop
                    ? 0
                    : Random(parameters.MaxLoad * 0.15f * stationsizemodifier));
            if (true == firststop) {
                // larger group at the initial station
                loadcount *= 2;
            }

            if ((unloadcount > 0) || (loadcount > 0)) {
                vehicle->LoadExchange(unloadcount, loadcount, Platform);
                exchangetime =
                    std::max(exchangetime, vehicle->LoadExchangeTime());
            }
        }
    next:
        vehicle = vehicle->Next();
    }

    return exchangetime;
}
