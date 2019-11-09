//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double total_value, mid_value, tax;

    cout << "\n\tCena rynkowa nieruchomości: ";
    cin >> total_value;

    mid_value = total_value * .6;
    tax = mid_value / 100 * .75;

    cout << setprecision(2) << fixed;
    cout << "\tWartość szacunkowa nieruchomości: " << mid_value << endl;
    cout << "\tPodatek od nieruchomości: " << tax << endl;

    return 0;
}