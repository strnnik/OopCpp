#include "../include/Employee.h"

int Employee::nextId = 0;

Employee::Employee(std::string _firstName, std::string _lastName, double _salary) : 
    firstName(_firstName), 
    lastName(_lastName), 
    salary(_salary) {
        id = nextId++;
    }

void Employee::setFirstName(std::string _firstName){
    firstName = firstName;
}
void Employee::setLastName(std::string _lastName){
    lastName = _lastName;
}

void Employee::setSalary(double _salary){
    salary = _salary;
}

std::string Employee::getFirstName(){
    return firstName;
}
std::string Employee::getLastName(){
    return lastName;
}

double Employee::getSalary(){
    return salary;
}

void Employee::outputInfoEmployee(){
    std::cout << "Employee ID: " << id << std::endl;
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Salary: " << id << std::endl;
}