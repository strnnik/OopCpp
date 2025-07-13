#pragma once

#include <iostream>
#include <string>
#include <vector>

class Developer;

struct Date {
    int day, month, year;

    Date() {
        day = 0;
        month = 0;
        year = 0;
    }
};

class Project {
    std::string nameProject;
    Date deadline;
    std::vector<Developer*> developers;
public:
    Project();
    Project(std::string _nameProject, std::string _deadline);
    Project(std::string _nameProject, std::string _deadline, std::vector<Developer*> _developers);
    ~Project();
    void addDeveloper(Developer*);
    void outputInfo();
};