#pragma once

#include "Employee.h"
#include "Project.h"

class Developer : public Employee {
    std::string programmingLanguage;
    Project *project;
public:
    Developer(std::string _programmingLanguage);
    Developer(std::string _programmingLanguage, Project *_project);
    std::string getFirstName();
    std::string getLastName();
    std::string getProgLang();
    void getInfoProject();
    void outputInfoEmployee() override {
        Employee::outputInfoEmployee();
    }
};