#include "PlayerController.h"

#include <functional>

#include "Train.h"

PlayerController::PlayerController(TTrain *train) {
    activeTrain = train;
    state = new SimulationState(train);
}

PlayerController::~PlayerController() { delete state; }

bool PlayerController::doChangeState(
    simulationStateGetterFn getter, simulationStateSetterFn setter,
    bool enable) {
    const bool current = std::invoke(getter, this->state);

    if (enable && !current) {
        std::invoke(setter, this->state, true);
        return true;
    } else if (!enable && current) {
        std::invoke(setter, this->state, false);
        return true;
    }
    return false;
}

bool PlayerController::setHornLow(bool enable) {
    return doChangeState(
        &SimulationState::isLowHornSignalActive,
        &SimulationState::setLowHornSignal, enable);
}

bool PlayerController::setHornHigh(bool enable) {
    return doChangeState(
        &SimulationState::isHighHornSignalActive,
        &SimulationState::setHighHornSignal, enable);
}

SimulationState::SimulationState(TTrain *train) { activeTrain = train; }

bool SimulationState::isLowHornSignalActive() {
    return activeTrain->Occupied()->WarningSignal & 1;
}

bool SimulationState::isHighHornSignalActive() {
    return activeTrain->Occupied()->WarningSignal & 2;
}

void SimulationState::setLowHornSignal(bool x) {
    if (x) {
        activeTrain->Occupied()->WarningSignal |= 1;
    } else {
        activeTrain->Occupied()->WarningSignal &= ~1;
    }
    activeTrain->Occupied()->WarningSignal &= ~2;
}

void SimulationState::setHighHornSignal(bool x) {
    if (x) {
        activeTrain->Occupied()->WarningSignal |= 2;
    } else {
        activeTrain->Occupied()->WarningSignal &= ~2;
    }
    activeTrain->Occupied()->WarningSignal &= ~1;
}
