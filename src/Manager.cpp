#include "../include/Manager.h"

int Candidate::nextId = 0;

Candidate::Candidate(std::string firstName, std::string lastName, std::string email, std::string dateInterview) :
    firstName(firstName), lastName(lastName), email(email), dateInterview(dateInterview) {}

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
        case TypeManager::HRManager:   return "HR-Manager";
        case TypeManager::ProjectManager: return "Project-Manager";
        case TypeManager::ProductManager:  return "Product-Manager";
        default:    return "UNKNOWN";
    }
}

std::string Manager::getTypeManager(){
    return typeManagerToString(typeManager);
}

void Manager::addCandidate(std::string _firstName, std::string _lastName, std::string _email, std::string _dateInterview){
    if (typeManager == TypeManager::HRManager){
        id = Candidate::nextId++;
        Candidate c(_firstName,_lastName, _email, _dateInterview);
        listCandidates.push_back(&c);
    } else {
        std::cout<< "Manager is not HR!\n\n";
    }
}

void Manager::outputInfoEmployee() {
    Employee::outputInfoEmployee();
    std::cout << "Type manager: " << getTypeManager() << std::endl;
};