//
// Created by szyns on 03.12.2023.
//

#include "TeamLeader.h"

float TeamLeader::calculateBonus(int value) {
   float leadersSalary = value*(1+getSalary()+getExperience());
   cout<<"This leader's salary: "<<leadersSalary<<endl;
    return leadersSalary;
}

void TeamLeader::show() {
    Employee::show();
    cout<<"Jestem Team Leader z "<<getExperience()<<"-letnim doswiadczeniem"<<endl;
}

TeamLeader::TeamLeader(const string &surname, int age, int experience, float salary) : Employee(surname, age,
                                                                                                experience, salary) {}

TeamLeader::TeamLeader() {}
