#pragma once

#include "Employee.h"

struct Candidates {
    static int nextId;
    int id;
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string dateInterview;
};

class Manager : public Employee {
    std::vector<Candidates*> listCandidates;
public:
    Manager(std::string _firstFame, std::string _lastName, double _salary);
    Manager(std::string _firstFame, std::string _lastName, double _salary, std::vector<Candidates*> _listCandidates);
    void addCandidate(std::string _firstName, std::string _lastName, std::string _email, std::string _dateInterview);
};