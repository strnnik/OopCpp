#ifndef OOP1_EMPLOYEE_H
#define OOP1_EMPLOYEE_H

#include <iostream>
#include <string>
#include <vector>

class Employee {
    static int id;
    std::string firstName;
    std::string lastName;
    std::string position;
    int salary;
public:
    void outputInfoEmployee();
};

#endif //OOP1_EMPLOYEE_H
