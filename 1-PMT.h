#ifndef HAUGHEY_KEVIN_1_PMT_H
#define HAUGHEY_KEVIN_1_PMT_H

#include <iostream>
#include <ctime>
#include <cmath>
#include "inputs.h"

using namespace std;

void pmt() {

    float n, pv, r, pmt;

    n = period();
    pv = loanValue();
    r = interest();

    pmt = pv * r * (1 + ( 1 / ( pow(1+r,n) -1 )) );

    cout <<  "The periodic installments are " << pmt << "€" << endl;
}


#endif //HAUGHEY_KEVIN_1_PMT_H
