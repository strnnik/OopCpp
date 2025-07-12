#include "Employee.h"

int Employee::nextId = 0;

void Employee::outputInfoEmployee(){
    std::cout << "Employee ID: " << id << std::endl;
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Position: " << position << std::endl;
    std::cout << "Salary: " << id << std::endl;
}