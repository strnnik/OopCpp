#include "Manager.h"

int Candidate::nextId = 0;

Candidate::Candidate(std::string firstName, std::string lastName, std::string email, std::string dateInterview) :
    Candidate(firstName, lastName, email, dateInterview) {}

Manager::Manager(TypeManager _typeManager) :
    Employee(firstName, lastName, salary), typeManager(_typeManager) {}

Manager::~Manager(){
    for (Candidate *candidate : listCandidates) {
        delete candidate;
    }
    listCandidates.clear(); 
}

void Manager::addCandidate(std::string _firstName, std::string _lastName, std::string _email, std::string _dateInterview){
    id = Candidate::nextId++;
    Candidate c(_firstName,_lastName, _email, _dateInterview);
    listCandidates.push_back(&c);
}