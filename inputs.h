#ifndef HAUGHEY_KEVIN_INPUTS_H
#define HAUGHEY_KEVIN_INPUTS_H

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

// This header file stores all of the function
// which asks the user to imput variables
// this reduces redundancy

float period() {

    float n;
    do {
        cout << "How many periods? ie. n = ?" << endl;
        cin >> n;

        if (n < 1) {
            cout << "The loan must be for at least 1 period" << endl;
            cout << "Please enter again" << endl << endl;
        }

    } while (n < 1);

    return n;
}


float loanValue() {

    float pv;
    do {
        cout << "Please enter the amount to be borrowed in €" << endl;
        cout << "ie. the Present Value PV (€)" << endl;
        cin >> pv;

        if (pv <= 0) {
            cout << "Please enter a positive amount" << endl;
            cout << "We are a loans company - not an investment fund!" << endl << endl;
        }
    } while (pv <= 0);

    return pv;
}


float interest() {

    float r;
    do {
        cout << "Please enter the periodic interest rate in %" << endl;
        cout << "ie. 4% = 4" << endl;
        cin >> r;
        r = r / 100; //converts 4% to 0.04

        if (r <= 0) {
            cout << "Please enter a positive interest rate" << endl;
            cout << "We want to make a profit off our customers!" << endl << endl;
        }
    } while (r <= 0);

    return r;
}

float instalment() {

    float pmt;
    do {
        cout << "How much would you like your periodic instalments to be in €?" << endl;
        cin >> pmt;

        if (pmt <= 0) {
            cout << "You must pay us a positive amount!" << endl;
            cout << "Please try again!" << endl << endl;
        }
    } while (pmt <= 0);

    return pmt;
}

#endif //HAUGHEY_KEVIN_INPUTS_H
