#pragma once

#include "../include/Employee.h"
#include "../include/Project.h"

class Developer : public Employee {
    std::string programmingLanguage;
    Project *project;
public:
    Developer(std::string _firstName, std::string _lastName, double _salary, std::string _programmingLanguage);
    Developer(std::string _firstName, std::string _lastName, double _salary, std::string _programmingLanguage, Project *_project);
    void setProgLang(std::string _lang);
    void setProject(Project *_project);
    void getInfoProject();
    std::string getProgLang();
    void outputInfoEmployee() override;
};