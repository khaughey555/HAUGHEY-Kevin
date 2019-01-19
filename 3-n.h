#ifndef HAUGHEY_KEVIN_3_N_H
#define HAUGHEY_KEVIN_3_N_H

#include <iostream>
#include <ctime>
#include <cmath>
#include "inputs.h"

using namespace std;

void n() {

    float n, pv, r, pmt;

    pv = loanValue();
    r = interest();
    pmt = instalment();

    n = ( log(pmt) - log(pmt - pv*r) ) / log(1+r);

    cout << "The number of installments is " << n << endl;
}

#endif //HAUGHEY_KEVIN_3_N_H
