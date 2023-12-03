//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA1_DEVELOPER_H
#define CWICZENIA1_DEVELOPER_H


#include "Employee.h"

class Developer: public Employee{
public:
    float calculateBonus(int value) override;

    Developer(const string &surname, int age, int experience, float salary);

    Developer();
};


#endif //CWICZENIA1_DEVELOPER_H
