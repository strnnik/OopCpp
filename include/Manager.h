#pragma once

#include "Employee.h"

enum class TypeManager{ 
    HRManager, 
    ProductManager, 
    ProjectManager 
};

struct Candidate {
    static int nextId;
    int id;
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string dateInterview;
    Candidate(std::string firstName, std::string lastName, std::string email, std::string dateInterview);
};

class Manager : public Employee {
    TypeManager typeManager; 
    std::vector<Candidate*> listCandidates;
public:
    Manager(TypeManager);
    Manager::~Manager();
    void addCandidate(std::string _firstName, std::string _lastName, std::string _email, std::string _dateInterview);
};