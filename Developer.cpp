#include "Developer.h"

Developer::Developer(std::string _firstFame, std::string _lastName, double _salary, std::string _programmingLanguage){
    id = nextId++;
    fistName = _firstName;
    lastName = _lastName;
    salary = _salary;
    programmingLanguage = _programmingLanguage;
    project = nullptr;
}

Developer::Developer(std::string _firstFame, std::string _lastName, double _salary, std::string _programmingLanguage, Project *_project){
    id = nextId++;
    fistName = _firstName;
    lastName = _lastName;
    salary = _salary;
    programmingLanguage = _programmingLanguage;
    project = nullptr;
}

std::string Developer::getFirstName(){
    return firstName;
}

std::string Developer::getLastName(){
    return lastName;
}

void Developer::getInfoDevelopment(){
    if (project == nullptr){
        std::cout << "The developer is not currently involved in the project.\n";
    } else {
        project->infoOutput();
    }
}