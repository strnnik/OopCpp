#include "Project.h"
#include "Developer.h"

namespace {
    Date parseDate(std::string dateStr){
        Date date;
        date.day = std::stoi(dateStr.substr(0, 2));
        date.month = std::stoi(dateStr.substr(3, 2));
        date.year = std::stoi(dateStr.substr(6, 4));

        return date;
    }
}

Project::Project() : 
    nameProject(""), 
    deadline(Date()) {}

Project::Project(std::string _nameProject, std::string _deadline) :
    nameProject(_nameProject), 
    deadline(parseDate(_deadline)) {}

Project::Project(std::string _nameProject, std::string _deadline, std::vector<Developer*> _developers) :
    nameProject(_nameProject),
    deadline(parseDate(_deadline)),
    developers(_developers) {}

Project::~Project(){
    
}

void Project::addDeveloper(Developer *dev){
    developers.push_back(dev);
}

void Project::outputInfo(){
    std::cout << "Name project: " << nameProject << std::endl;
    std::cout << "Project developers: \n";

    for (Developer *d : developers) {
        std::cout << d->getLastName() << std::endl;
    }

    std::cout << std::endl;
}