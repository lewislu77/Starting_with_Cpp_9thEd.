//
// Created by Marcin Luberda on 13/03/2020.
//

#include <iostream>

using namespace std;

int main(){

    double perc{0}, perc_mth, perc_yr, sal_st, act{0}, act_mth, pass{0}, pass_mth, sal{0};
    int month;

    cout << "\n\tRoczna stopa procentowa: ";
    cin >> perc_yr;
    cout << "\tSaldo poczatkowe: ";
    cin >> sal_st;
    cout << "\tLiczba miesiecy od zalozenia konta: ";
    cin >> month;
    cout << endl;

    sal = sal_st;

        for (int i = 1; i <= month; i++) {

            cout << "\tDepozyt w " << i << " miesiacu: ";
            cin >> act_mth;
            while (act_mth < 0) {
                cout << "\tWartosc nie moze byc ujemna. Wprowadz dane jeszcze raz: ";
                cin >> act_mth;
            }
            act += act_mth;
            sal += act_mth;

            cout << "\tWyplaty w " << i << " miesiacu: ";
            cin >> pass_mth;
            while (pass_mth < 0) {
                cout << "\tWartosc nie moze byc ujemna. Wprowadz dane jeszcze raz: ";
                cin >> pass_mth;
            }
            pass += pass_mth;
            sal -= pass_mth;

            perc_mth = ((perc_yr * 0.01) / 12) * sal;
            perc += perc_mth;

            sal = sal + perc;

            if (sal < 0) {
                cout << "\n\tKonto zostalo zamkniete." << endl;
                break;
            }
        }

        cout << "\n\tSALDO: " << sal + perc << " DEPOZYTY: " << act << " WYPLATY: " << pass << " ODSETKI: " << perc << endl;

    return 0;
}