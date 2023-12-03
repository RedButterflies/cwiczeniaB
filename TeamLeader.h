//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA1_TEAMLEADER_H
#define CWICZENIA1_TEAMLEADER_H


#include "Employee.h"

class TeamLeader:public Employee {
    void show() override;

    float calculateBonus(int value) override;

public:
    TeamLeader(const string &surname, int age, int experience, float salary);

    TeamLeader();
};


#endif //CWICZENIA1_TEAMLEADER_H
