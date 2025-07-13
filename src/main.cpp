#include "../include/Developer.h"
#include "../include/Project.h"
#include "../include/Employee.h"
#include "../include/Manager.h"

#include <iostream>

int main() {
    
    Employee *emp[20];

    emp[0] = new Manager("man1", "asd", 4000, TypeManager::Product);
    emp[1] = new Manager("man2", "asd", 3000, TypeManager::Project);
    emp[2] = new Manager("man3", "asd", 1000, TypeManager::HR);
    emp[3] = new Manager("man4", "asd", 9000, TypeManager::HR);
    
    dynamic_cast<Manager*>(emp[1])->addCandidate("C1", "C11", "qwe@mail.ru", "10.10.2020");
    dynamic_cast<Manager*>(emp[2])->getInfoAboutCandidates();
    dynamic_cast<Manager*>(emp[2])->addCandidate("C1", "C11", "qwe@mail.ru", "10.10.2020");
    dynamic_cast<Manager*>(emp[2])->addCandidate("C2", "C22", "qw@mail.ru", "05.03.2023");
    dynamic_cast<Manager*>(emp[2])->addCandidate("C3", "C33", "q@gmail.ru", "30.11.2021");
    dynamic_cast<Manager*>(emp[2])->getInfoAboutCandidates();

    Project *p[10];
    p[0] = new Project("Project1", "20.20.2020");

    p[0]->outputInfo();
    std::cout << std::endl;

    emp[4] = new Developer("dev1", "wee", 4000, "A++");
    emp[5] = new Developer("dev2", "dad2", 5000, "B++", p[0]);
    emp[6] = new Developer("dev3", "deq3", 5000, "C++", p[0]);

    for (int i = 0; i < 7; ++i) {
        if (emp[i]){
            emp[i]->outputInfoEmployee();
            std::cout << std::endl;
        }
    }
    
    p[0]->outputInfo();

    return 0;
}