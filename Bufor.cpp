//
// Created by szyns on 03.12.2023.
//

#include "Bufor.h"
#include <iostream>
using namespace std;
Bufor::Bufor() {
    rozmiar=10;
    wskaznik = new int[rozmiar];
    for(int i=0;i<rozmiar;i++)
    {
        wskaznik[i]=0;
    }
    firstFreeSpaceIndex = 0;
}

Bufor::Bufor(int rozmiar) : rozmiar(rozmiar) {
    wskaznik = new int[rozmiar];
    for(int i=0;i<rozmiar;i++)
    {
        wskaznik[i]=0;
    }
    firstFreeSpaceIndex = 0;
}

Bufor::~Bufor() {
    delete[]wskaznik;

}

void Bufor::add(int value) {
    wskaznik[firstFreeSpaceIndex]=value;
    firstFreeSpaceIndex++;

}

int Bufor::getIndex() {
    return firstFreeSpaceIndex;
}

int Bufor::getSize() {
    return rozmiar;
}

int Bufor::getTab(int i) {
    if(i>=0 && i<rozmiar) {
        return wskaznik[i];
    }
    else
    {
        cout<<"Podany indeks znajduje sie poza tablica"<<endl;
        return 0;
    }
}

int Bufor::getFirst() {
   return firstFreeSpaceIndex;
}

void Bufor::setFirst(int value) {
    firstFreeSpaceIndex = value;
}

void Bufor::seTab(int pos, int value) {
if(pos>=0 && pos<rozmiar)
{
    wskaznik[pos]=value;
}
else
{
    cout<<"Indeks, na ktory chcesz wstawic wartosc znajduje sie poza tablica"<<endl;
}
}

void Bufor::showTab() {
    cout<<"Elementy tablicy: "<<"\t";
    for(int i=0;i<rozmiar;i++)
    {
        cout<<wskaznik[i]<<",";
    }
    cout<<endl;

}
