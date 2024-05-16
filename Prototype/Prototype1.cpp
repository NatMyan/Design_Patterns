#include <iostream>
#include <string>
#include <unordered_map>
#include <memory>

//--------------------------------------------------------------------------------------------------------
class Employee {
    public:
        virtual std::unique_ptr<Employee> clone() const = 0; // clone of interface
        virtual void printDetails() const = 0;
        virtual ~Employee() = default;
};

//--------------------------------------------------------------------------------------------------------
class ConcreteEmployee : public Employee {
    public:
        ConcreteEmployee(std::string name, int suite) : 
            name{name}, suite{suite} {}
    
    public:
        std::unique_ptr<Employee> clone() const override;  // clone of concrete prototype
        void printDetails() const override;

    private:
        std::string name;
        int suite;
};

std::unique_ptr<Employee> ConcreteEmployee::clone() const {
    return std::make_unique<ConcreteEmployee>(*this); // deep copy, not shallow w/copy ctor
}

void ConcreteEmployee::printDetails() const {
    std::cout << "Name: " << name << ", " << "Suite: " << suite << std::endl;
}

//--------------------------------------------------------------------------------------------------------
class EmployeePrototypeFactory {
    public:
        EmployeePrototypeFactory(); 

    public:
        std::unique_ptr<Employee> createEmployee(const std::string& role) const;

    private:
        std::unordered_map<std::string, std::unique_ptr<Employee> > prototypes;
};

EmployeePrototypeFactory::EmployeePrototypeFactory () {
    prototypes["developer"] = std::make_unique<ConcreteEmployee>("John Doe", 10);
    prototypes["designer"] = std::make_unique<ConcreteEmployee>("Jane Doe", 11);
    prototypes["manager"] = std::make_unique<ConcreteEmployee>("Bob Doe", 12);
}

std::unique_ptr<Employee> EmployeePrototypeFactory::createEmployee(const std::string& role) const {
    auto it = prototypes.find(role);
    if (it != prototypes.end()) {
        return it->second->clone();
    }
    return nullptr; 
}

//--------------------------------------------------------------------------------------------------------
int main() {
    EmployeePrototypeFactory factory;

    std::unique_ptr<Employee> dev = factory.createEmployee("developer");
    std::unique_ptr<Employee> designer = factory.createEmployee("designer");
    std::unique_ptr<Employee> manager = factory.createEmployee("manager");

    dev->printDetails();
    designer->printDetails();
    manager->printDetails();

    return 0;
}
