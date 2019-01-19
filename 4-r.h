#ifndef HAUGHEY_KEVIN_4_R_H
#define HAUGHEY_KEVIN_4_R_H

#include <iostream>
#include <ctime>
#include <cmath>
#include "inputs.h"

using namespace std;

//  Having rearranged the formula and set = 0
// f(r) = 0
float f(float pv, float pmt, float n, float r) {

    float temp;

    temp = (1/r) * ( 1 - ( 1 / pow(1+r,n) ));
    temp -= (pv/pmt);

    return temp;
}


// Using the secant method to calculate r
float r() {

    float n, pv, r, pmt, approxR, rNext, temp;

    n = period();
    pv = loanValue();
    pmt = instalment();
    approxR = 0.1; //this is subjective, i assume  interest rates will definitely be below this

    r = approxR;
    rNext = 0.95 * r;


    while (abs( f(pv,pmt,n,  rNext))  > 0.001){

        temp = rNext;
        rNext = rNext - ( f(pv,pmt,n,rNext) * (rNext - r)  )  / ( f(pv,pmt,n,rNext) -  f(pv,pmt,n,r) );
        r = temp;
    }

    cout << "The interest rate is " << r*100 << "%" << endl;
}

#endif //HAUGHEY_KEVIN_4_R_H
