#include "Developer.h"

Developer::Developer(std::string _programmingLanguage) :
    Employee(firstName, lastName, salary), 
    programmingLanguage(_programmingLanguage) {
        project = nullptr;
    }

Developer::Developer(std::string _programmingLanguage, Project *_project) :
    Employee(firstName, lastName, salary), 
    programmingLanguage(_programmingLanguage),
    project(_project) {}

std::string Developer::getFirstName(){
    return firstName;
}

std::string Developer::getLastName(){
    return lastName;
}

std::string Developer::getProgLang(){
    return programmingLanguage;
}

void Developer::getInfoProject(){
    if (project == nullptr){
        std::cout << "The developer is not currently involved in the project.\n";
    } else {
        project->outputInfo();
    }
}

void Developer::outputInfoEmployee() {
    Employee::outputInfoEmployee();
    std::cout << getProgLang() << std::endl;
    getInfoProject();
};