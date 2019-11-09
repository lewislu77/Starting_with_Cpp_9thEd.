//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    double credit, all_credit, interest, percent, p_cent_use, part, parts_val;

    cout << "\n\tKwota kretytu: ";
    cin >> credit;
    cout << "\tOprocentowanie roczne kredytu: ";
    cin >> percent;
    cout << "\tLiczba rat: ";
    cin >> parts_val;

    p_cent_use = (percent / 12) / 100;
    part = ((p_cent_use * (pow(1 + p_cent_use, parts_val))) / ((pow(1 + p_cent_use, parts_val)) - 1)) * credit;
    all_credit = part * parts_val;
    interest = all_credit - credit;

    cout << setprecision(2) << fixed;
    cout << "\n\tKwota kredytu:             " << setw(15) << credit << " zł" << endl;
    cout << "\tMiesięczne oprocentowanie: " << setw(15) << percent/12 << " %" << endl;
    cout << "\tLiczba rat:                " << setw(15) << parts_val << "  " << endl;
    cout << "\tRata miesięczna            " << setw(15) << part << " zł" << endl;
    cout << "\tŁączna wartość:            " << setw(15) << all_credit << " zł" << endl;
    cout << "\tZapłacone odsetki:         " << setw(15) << interest << " zł" << endl;

    return 0;
}