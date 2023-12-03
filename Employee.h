//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA1_EMPLOYEE_H
#define CWICZENIA1_EMPLOYEE_H
#include <iostream>

using namespace std;

class Employee {
private:
    string surname;
    int age;
    int experience;
    float salary;
public:
    Employee(const string &surname, int age, int experience, float salary);
    Employee();
    virtual ~Employee();
    virtual void show();
    virtual float calculateBonus(int value)=0;
    int ageEmployement();

    const string &getSurname() const;

    int getAge() const;

    int getExperience() const;

    float getSalary() const;


};


#endif //CWICZENIA1_EMPLOYEE_H
