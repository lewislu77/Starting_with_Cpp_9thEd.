//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const double YEN_PER_DOLLAR = 98.93;
    const double EURO_PER_DOLLAR = 0.74;

    double yen, euro, dollar;

    cout << "\n\tKwota w dolarach: ";
    cin >> dollar;

    yen = YEN_PER_DOLLAR * dollar;
    euro = EURO_PER_DOLLAR * dollar;

    cout << setprecision(2) << fixed << showpoint;
    cout << "\tPo wymianie, to: " << setw(10) << right << yen << " Yen.\n";
    cout << "\tPo wymianie, to: " << setw(10) << right << euro << " Euro.\n";

    return 0;
}