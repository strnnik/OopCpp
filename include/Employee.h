#pragma once

#include <iostream>
#include <string>
#include <vector>

class Employee {
    static int nextId;
protected:
    int id;
    std::string firstName;
    std::string lastName;
    double salary;
public:
    Employee(std::string _firstName, std::string _lastName, double _salary);
    void setFirstName(std::string _firstName);
    void setLastName(std::string _lastName);
    std::string getFirstName();
    std::string getLastName();
    double getSalary();
    void editSalary(double _salary);
    virtual void outputInfoEmployee();
};