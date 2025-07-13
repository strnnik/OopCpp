#include "../include/Project.h"
#include "../include/Developer.h"

namespace {
    Date parseDate(std::string dateStr){
        Date date;
        date.day = std::stoi(dateStr.substr(0, 2));
        date.month = std::stoi(dateStr.substr(3, 2));
        date.year = std::stoi(dateStr.substr(6, 4));

        return date;
    }
}

Project::Project(std::string _nameProject, std::string _deadline) :
    nameProject(_nameProject), 
    deadline(parseDate(_deadline)) {}

Project::Project(std::string _nameProject, std::string _deadline, std::vector<Developer*> _developers) :
    nameProject(_nameProject),
    deadline(parseDate(_deadline)),
    developers(_developers) {}

void Project::setNameProject(std::string _nameProject){
    nameProject = _nameProject;
}

void Project::setDeadline(std::string _deadline){
    deadline = parseDate(_deadline);
}

std::string Project::getNameProject(){
    return nameProject;
}

std::string Project::getDeadlineProject(){
    std::string date;
    date = std::to_string(deadline.day) +
    "/" + std::to_string(deadline.month) +
    "/" + std::to_string(deadline.year);
    return date;
}

void Project::addDeveloper(Developer *dev){
    developers.push_back(dev);
    dev->setProject(this);
}

void Project::outputInfo(){
    std::cout << "Name project: " << nameProject << std::endl;
    std::cout << "Project developers: \n";

    for (int i = 0; i < developers.size(); i++) {
        std::cout << developers[i]->getLastName() << std::endl;
    }

    std::cout << std::endl;
}