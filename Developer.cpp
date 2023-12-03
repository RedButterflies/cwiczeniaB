//
// Created by szyns on 03.12.2023.
//

#include "Developer.h"

float Developer::calculateBonus(int value) {
  float employeeSalary = value + 0.2*value*(getSalary()+getExperience());
  cout<<"This employee's salary: "<<employeeSalary<<endl;
    return employeeSalary;
}

Developer::Developer(const string &surname, int age, int experience, float salary) : Employee(surname, age, experience,
                                                                                              salary) {}

Developer::Developer() {}
