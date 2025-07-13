#pragma once

#include <iostream>
#include <string>
#include <vector>

class Developer;

struct Date {
    int day, month, year;

    Date() {}
};

class Project {
    std::string nameProject;
    Date deadline;
    std::vector<Developer*> developers;
public:
    Project(std::string _nameProject, std::string _deadline);
    Project(std::string _nameProject, std::string _deadline, std::vector<Developer*> _developers);
    ~Project();
    void setNameProject(std::string _nameProject);
    void setDeadline(std::string _deadline);
    std::string getNameProject();
    std::string getDeadlineProject();
    void addDeveloper(Developer*);
    void outputInfo();
};