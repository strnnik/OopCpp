#pragma once

#include "Employee.h"
#include "Project.h"

class Developer : public Employee {
    std::string programmingLanguage;
    Project *project;
public:
    Developer(std::string _firstFame, std::string _lastName, double _salary, std::string _programmingLanguage);
    Developer(std::string _firstFame, std::string _lastName, double _salary, std::string _programmingLanguage, Project *_project);
    std::string getFirstName();
    std::string getLastName();
    void getInfoDevelopment();
};