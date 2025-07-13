#include "../include/Developer.h"

Developer::Developer(std::string _firstName, std::string _lastName, double _salary, std::string _programmingLanguage) :
    Employee(_firstName, _lastName, _salary), 
    programmingLanguage(_programmingLanguage) {
        project = nullptr;
    }

Developer::Developer(std::string _firstName, std::string _lastName, double _salary, std::string _programmingLanguage, Project *_project) :
    Employee(_firstName, _lastName, _salary), 
    programmingLanguage(_programmingLanguage),
    project(_project) {
        _project->addDeveloper(this);
    }

void Developer::setProgLang(std::string _lang){
    programmingLanguage = _lang;
}

void Developer::setProject(Project *_project){
    project = _project;
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
    std::cout << "Programming language: " << getProgLang() << std::endl;
    if (project == nullptr){
        std::cout << "The developer is not currently involved in the project.\n";
    } else {
        std::cout << project->getNameProject() << std::endl;
    }
};