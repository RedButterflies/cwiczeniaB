//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA1_MEANBUFOR_H
#define CWICZENIA1_MEANBUFOR_H


#include "Bufor.h"
#include <iostream>
using namespace std;
class MeanBufor: public Bufor {
public:
    MeanBufor() = default;

    explicit MeanBufor(int rozmiar) : Bufor(rozmiar) {}

    double calculate() override;

};


#endif //CWICZENIA1_MEANBUFOR_H
