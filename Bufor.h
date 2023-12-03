//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA1_BUFOR_H
#define CWICZENIA1_BUFOR_H


class Bufor {
private:
    int* wskaznik;
    int rozmiar;
    int firstFreeSpaceIndex;
public:
    Bufor();
    explicit Bufor(int rozmiar);
    virtual ~Bufor();
    virtual void add(int value);
    virtual double calculate()=0;
    int getIndex();
    int getSize();
    int getTab(int i);
    int getFirst();
    void setFirst(int value);
    void seTab(int pos, int value);
    void showTab();


};


#endif //CWICZENIA1_BUFOR_H
