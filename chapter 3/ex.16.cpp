//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double total_value, mid_value, tax_yr, tax;

    cout << "\n\tCena rynkowa nieruchomości: ";
    cin >> total_value;
    cout << "\tPodatek na 100 zł wartości szacowanej (w zł): ";
    cin >> tax_yr;

    mid_value = total_value * .6;
    tax = (mid_value - 5000) / 100 * tax_yr;

    cout << setprecision(2) << fixed;
    cout << "\n\tCałkowita wartość podatku nieruchomości seniora: " << tax << endl;
    cout << "\tPodatek kwartalny od nieruchomości: " << tax / 4 << endl;

    return 0;
}