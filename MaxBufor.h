//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA1_MAXBUFOR_H
#define CWICZENIA1_MAXBUFOR_H


#include "Bufor.h"

class MaxBufor: public Bufor {
public:
    MaxBufor();

    explicit MaxBufor(int rozmiar);

    double calculate() override;

    void add(int value) override;

};


#endif //CWICZENIA1_MAXBUFOR_H
