//
// Created by szyns on 03.12.2023.
//

#include "MaxBufor.h"
#include <iostream>
using namespace std;
double MaxBufor::calculate() {
    int max = 0;
    for(int i=0;i< getSize();i++)
    {
        if(getTab(i)>max)
        {
            max = getTab(i);
        }
    }
    cout<<"Najwieksza liczba sposrod liczb w tablicy "<<max<<endl;
    return max;
}

MaxBufor::MaxBufor() = default;

MaxBufor::MaxBufor(int rozmiar) : Bufor(rozmiar) {

}

void MaxBufor::add(int value) {
    if(getFirst()==getSize())
    {
        cout<<"W tablicy nie ma juz miejsca. Nie moge wstawic elementu do tablicy"<<endl;
    }
    else
    {
        Bufor::add(value);

        cout<<"Wstawiono element "<<value<<" do tablicy"<<endl;
    }
}
