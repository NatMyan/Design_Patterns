#include <iostream>
#include <string>
#include <unordered_map>
#include <memory>

struct Address {
    std::string street;
    std::string city;
    int suite;
};

struct Contact {
    std::string name;
    Address *address;
};

struct EmployeeFactory {
    public:
        static std::unique_ptr<Contact> NewMainOfficeEmployee(std::string name, int suite) {
            return NewEmployee(name, suite, main);
        }

        static std::unique_ptr<Contact> NewAuxOfficeEmployee(std::string name, int suite) {
            return NewEmployee(name, suite, auxl);
        }

    private:
        static std::unique_ptr<Contact> NewEmployee(std::string name, int suite, const Contact& proto) {
            auto result = std::make_unique<Contact>(proto);
            result->name = std::move(name);
            result->address->suite = suite;
            return result;
        }

        static Contact main;
        static Contact auxl;
};

Contact EmployeeFactory::main = Contact{"", new Address{"123 East", "London", 0}};
Contact EmployeeFactory::auxl = Contact{"", new Address{"123B East", "London", 0}};


int main() {
    auto mainEmployee = EmployeeFactory::NewMainOfficeEmployee("John Doe", 10);
    std::cout << "Main Office Employee:" << std::endl;
    std::cout << "Name: " << mainEmployee->name << std::endl;
    std::cout << "Street: " << mainEmployee->address->street << std::endl;
    std::cout << "City: " << mainEmployee->address->city << std::endl;
    std::cout << "Suite: " << mainEmployee->address->suite << std::endl;

    auto auxEmployee = EmployeeFactory::NewAuxOfficeEmployee("Jane Doe", 11);
    std::cout << "\nAuxiliary Office Employee:" << std::endl;
    std::cout << "Name: " << auxEmployee->name << std::endl;
    std::cout << "Street: " << auxEmployee->address->street << std::endl;
    std::cout << "City: " << auxEmployee->address->city << std::endl;
    std::cout << "Suite: " << auxEmployee->address->suite << std::endl;

    return 0;
}

