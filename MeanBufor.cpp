//
// Created by szyns on 03.12.2023.
//

#include "MeanBufor.h"

double MeanBufor::calculate() {

    double mean =0;
    cout << "Srednia arytmetyczna liczb wstawionych do tablicy: " << endl;
    for (int i = 0; i < getSize(); i++) {
        mean += double(getTab(i));
    }
    mean = mean/ double(getSize());
    cout<<mean<<endl;
    return mean;
}
