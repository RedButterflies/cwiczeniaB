#include <iostream>
#include <cmath>
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"
#include "MeanBufor.h"
#include "MaxBufor.h"

using namespace std;
//void whoWorkedMoreThan5Years(Employee**e1,int size)
//{
//    cout<<"Pracownicy, ktorzy pracuja wiecej niz 5 lat: "<<endl;
//    for(int i=0;i<size;i++)
//    {
//        if(e1[i]->getExperience()>5)
//        {
//            e1[i]->show();
//        }
//    }
//}
//void howManyEarnLessThanMeanBonus(Employee**e1,int size)
//{
//
//    cout<<"Pracowicy, ktorzy zarabiaja mniej niz srednia: "<<endl;
//    float mean = 0;
//    for(int i=0;i<size;i++)
//    {
//        mean += e1[i]->getSalary();
//    }
//    mean/=size;
//    cout<<"Srednia zarobkow: "<<mean<<endl;
//    for (int i =0;i<size;i++)
//    {
//        if(e1[i]->getSalary()<mean)
//        {
//            e1[i]->show();
//        }
//    }
//


//}
int main() {
    MeanBufor m1 = MeanBufor(8);
    MaxBufor max1 = MaxBufor();
    m1.showTab();
    max1.showTab();
    m1.add(9);
    m1.add(10);
    m1.add(9);
    m1.add(10);
    m1.add(9);
    m1.add(10);
    m1.add(9);

    max1.add(7);
    max1.add(5);
    max1.add(7);
    max1.add(8);
    max1.add(7);
    max1.add(6);
    max1.add(3);
    max1.add(4);
    max1.add(6);
    max1.add(4);
    max1.add(7);

    m1.showTab();
    max1.showTab();

    m1.getFirst();
    max1.getFirst();

    m1.setFirst(3);
    max1.setFirst(0);

    m1.add(555);
    max1.add(690);


    m1.showTab();
    max1.showTab();

    m1.calculate();
    max1.calculate();

    max1.seTab(99,5);
    max1.seTab(5,111);

    m1.seTab(4,1);
    m1.seTab(44,333);

    m1.showTab();
    max1.showTab();

//    Employee** e1;
//    e1= new Employee *[6];
//    for (int i=0;i<3;i++)
//    {
//        e1[i] = new Developer("Jozef",10*(i+2),1*(i+1),2450.0*(i+2));
//
//    }
//    for (int i=3;i<6;i++)
//    {
//        e1[i] = new TeamLeader("Macikan",ceil(30*(i+2)/2),ceil(20*(i+1)/3),5320.0*(i+2));
//
//    }
//    cout<<"Wszyscy pracownicy: "<<endl;
//    for (int i = 0; i<6;i++)
//    {
//        e1[i]->show();
//    }
//    whoWorkedMoreThan5Years(e1,6);
//    howManyEarnLessThanMeanBonus(e1,6);
//
//    for(int i=0;i<6;i++)
//    {
//        cout<<"Usunieto pracownika: "<<e1[i]<<endl;
//        delete e1[i];
//    }
//    delete[] e1;
//    cout<<"Usunieto tablice dynamiczna"<<endl;


    return 0;
}
