#include "../include/Manager.h"

int Candidate::nextId = 0;

Candidate::Candidate(std::string firstName, std::string lastName, std::string email, std::string dateInterview) :
    firstName(firstName), lastName(lastName), email(email), dateInterview(dateInterview) {
        id = nextId++;
    }

void Candidate::getInfo(){
    std::cout << firstName << std::endl;
    std::cout << lastName << std::endl;
    std::cout << email << std::endl;
    std::cout << dateInterview << std::endl;
}

Manager::Manager(std::string _firstName, std::string _lastName, double _salary, TypeManager _typeManager) :
    Employee(_firstName, _lastName, _salary), typeManager(_typeManager) {}

Manager::~Manager(){
    for (Candidate *candidate : listCandidates) {
        delete candidate;
    }
    listCandidates.clear();
}

std::string typeManagerToString(TypeManager m) {
    switch(m) {
        case TypeManager::HR:   return "HR-Manager";
        case TypeManager::Project: return "Project-Manager";
        case TypeManager::Product:  return "Product-Manager";
        default:    return "UNKNOWN";
    }
}

std::string Manager::getTypeManager(){
    return typeManagerToString(typeManager);
}

void Manager::addCandidate(std::string _firstName, std::string _lastName, std::string _email, std::string _dateInterview){
    if (typeManager == TypeManager::HR){
        Candidate *c = new Candidate(_firstName, _lastName, _email, _dateInterview);
        listCandidates.push_back(c);
    } else {
        std::cout<< "Manager is not HR!\n\n";
    }
}

void Manager::getInfoAboutCandidates(){
    std::cout << "Information about candidates HR manager " << getLastName() << ": " << std::endl;
    if (listCandidates.size() == 0){
        std::cout << "The list of candidates is empty\n";
    } else {
        for (Candidate *cand : listCandidates){
            cand->getInfo();
            std::cout << std::endl;
        }
    }
}

void Manager::outputInfoEmployee() {
    Employee::outputInfoEmployee();
    std::cout << "Type manager: " << getTypeManager() << std::endl;
};