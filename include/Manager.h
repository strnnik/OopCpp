#pragma once

#include "../include/Employee.h"

enum class TypeManager{ 
    HR, 
    Product, 
    Project 
};

struct Candidate {
    static int nextId;
    int id;
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string dateInterview;
    Candidate(std::string firstName, std::string lastName, std::string email, std::string dateInterview);
    void getInfo();
};

class Manager : public Employee {
    TypeManager typeManager; 
    std::vector<Candidate*> listCandidates;
public:
    Manager(std::string _firstName, std::string _lastName, double _salary, TypeManager);
    ~Manager();
    std::string getTypeManager();
    void addCandidate(std::string _firstName, std::string _lastName, std::string _email, std::string _dateInterview);
    void getInfoAboutCandidates();
    void outputInfoEmployee();
};