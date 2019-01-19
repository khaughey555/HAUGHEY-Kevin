#ifndef HAUGHEY_KEVIN_2_PV_H
#define HAUGHEY_KEVIN_2_PV_H

#include <iostream>
#include <ctime>
#include <cmath>
#include "inputs.h"

using namespace std;

void pv() {

    float n, pv, r, pmt;

    pmt = instalment();
    n = period();
    r = interest();

    pv = (pmt/r) * ( 1 - ( 1 / pow(1+r,n)) );

    cout << "The initial loan size is " << pv << "€" << endl;
}

#endif //HAUGHEY_KEVIN_2_PV_H
