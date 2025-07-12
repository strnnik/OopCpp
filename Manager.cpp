#include "Manager.h"

Candidates::nextId = 0;

Manager::Manager(std::string _firstFame, std::string _lastName, double _salary){
    id = nextId++;
    fistName = _firstName;
    lastName = _lastName;
    salary = _salary;
}

Manager(std::string _firstFame, std::string _lastName, double _salary, std::vector<Candidates*> _listCandidates){
    id = nextId++;
    fistName = _firstName;
    lastName = _lastName;
    salary = _salary;
    listCandidates = _listCandidates;
}

void Manager::addCandidate(std::string _firstName, std::string _lastName, std::string _email, std::string dateInterview){
    id = nextId++;
    Candidate c = Candidate(_firstName, std::string _lastName, std::string _email, std::string _dateInterview);
    listCandidate.push_back(c*);
}