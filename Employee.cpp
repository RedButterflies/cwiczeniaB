//
// Created by szyns on 03.12.2023.
//

#include "Employee.h"

Employee::Employee(const string &surname, int age, int experience, float salary) : surname(surname), age(age),
                                                                                  experience(experience),
                                                                                  salary(salary) {}

Employee::Employee() {}

Employee::~Employee() {

}

void Employee::show() {
    cout<<"Surname: "<<surname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Years of experience: "<<experience<<endl;
    cout<<"Salary: "<<salary<<endl;
}

int Employee::ageEmployement() {
   int ageWhenFirstEmployed = age - experience;
   cout<<"When this employee was first employed they were "<<ageWhenFirstEmployed<<" years old"<<endl;
   return ageWhenFirstEmployed;
}

const string &Employee::getSurname() const {
    return surname;
}

int Employee::getAge() const {
    return age;
}

int Employee::getExperience() const {
    return experience;
}

float Employee::getSalary() const {
    return salary;
}
