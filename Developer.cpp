#include "Developer.h"

Developer::Developer(std::string _firstFame, std::string _lastName, std::string _programmingLanguage){
    fistName = _firstName;
    lastName = _lastName;
    programmingLanguage = _programmingLanguage;
    project = nullptr;
}

Developer::Developer(std::string _firstFame, std::string _lastName, std::string _programmingLanguage, Project *_project){
    fistName = _firstName;
    lastName = _lastName;
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