#include <iostream>
#include <unordered_map>

class HealthMonitor;

class HealthState {
    public:
        virtual void handleState(HealthMonitor& context) = 0;
};

class NormalState : public HealthState {
    public:
        void handleState(HealthMonitor& context) override;
};

class WarningState : public HealthState {
    public:
        void handleState(HealthMonitor& context) override;
};

class CriticalState : public HealthState {
    public:
        void handleState(HealthMonitor& context) override;
};

class HealthMonitor {
    private:
        HealthState* currentState;

    public:
        HealthMonitor();

    public:
        void setCurrentState(HealthState* state);
        void handleCurrentState();
        void simulateHealthChange(int heartRate, int oxygenLevel);
};

void NormalState::handleState(HealthMonitor& context) {
    std::cout << "Patient is in a normal state." << std::endl;
}

void WarningState::handleState(HealthMonitor& context) {
    std::cout << "Warning: Patient is in a critical condition. Alerting healthcare providers." << std::endl;
}

void CriticalState::handleState(HealthMonitor& context) {
    std::cout << "Critical: Immediate intervention required. Notifying emergency services." << std::endl;
}

HealthMonitor::HealthMonitor() : currentState(nullptr) {
    setCurrentState(new NormalState());
}

void HealthMonitor::setCurrentState(HealthState* state) {
    currentState = state;
}

void HealthMonitor::handleCurrentState() {
    currentState->handleState(*this);
}

void HealthMonitor::simulateHealthChange(int heartRate, int oxygenLevel) {
    if (heartRate < 60 || oxygenLevel < 90) {
        setCurrentState(new CriticalState());
    } 
    else if (heartRate < 70 || oxygenLevel < 95) {
        setCurrentState(new WarningState());
    } 
    else {
        setCurrentState(new NormalState());
    }
    handleCurrentState();
}

int main() {
    HealthMonitor healthMonitor;
    healthMonitor.simulateHealthChange(75, 98);
    healthMonitor.simulateHealthChange(55, 85);

    return 0;
}
