#pragma once
class TTrain;

class SimulationState {
   public:
    bool isLowHornSignalActive();
    bool isHighHornSignalActive();
    void setLowHornSignal(bool);
    void setHighHornSignal(bool);
    explicit SimulationState(TTrain *train);

   private:
    TTrain *activeTrain;
};

typedef bool (SimulationState::*simulationStateGetterFn)();
typedef void (SimulationState::*simulationStateSetterFn)(bool);

class PlayerController {
   public:
    bool setHornLow(bool);
    bool setHornHigh(bool);
    explicit PlayerController(TTrain *train);
    ~PlayerController();

   private:
    TTrain *activeTrain;
    SimulationState *state;
    bool doChangeState(
        simulationStateGetterFn, simulationStateSetterFn, bool enable);
};
