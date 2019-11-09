//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    double start_value, end_value, percent, percent_use, capital, adds;

    cout << "\n\tPoczątkowy stan konta: ";
    cin >> start_value;
    cout << "\tOprocentowanie: ";
    cin >> percent;
    cout << "\tLiczba kapitalizacji: ";
    cin >> capital;

    percent_use = percent / 100;
    end_value = start_value * pow((1 + percent_use / capital) , capital);
    adds = end_value - start_value;

    cout << setprecision(2) << fixed;
    cout << "\n\tOprocentowanie konta: " << setw(10) << percent << " %" << endl;
    cout << "\tLiczba kapitalizacji: " << setw(10) << capital << "  " << endl;
    cout << "\tSaldo początkowe:     " << setw(10) << start_value << " zł" << endl;
    cout << "\tOdsetki:              " << setw(10) << adds << " zł" << endl;
    cout << "\tSaldo końcowe konta:  " << setw(10) << end_value << " zł" << endl;

    return 0;
}