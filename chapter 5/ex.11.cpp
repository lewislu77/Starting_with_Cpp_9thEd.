//
// Created by Marcin Luberda on 06/03/2020.
//

#include <iostream>

using namespace std;

int main(){

    int day;
    double org, perct, sum{0};

    cout << "\n\tLiczba organizmow: ";
    cin >> org;
    cout << "\tPrzyrost dzienny w %: ";
    cin >> perct;
    cout << "\tLiczba dni hodowli: ";
    cin >> day;

    cout << "\n\tWielkosc populacji 1 dnia wynosi " << org << endl;

    for (int i = 2; i <= day; i++){

        sum = org + (org * (perct/100));
        org = sum;

        cout << "\tWielkosc populacji " << i << " dnia wynosi " << org << endl;
    }

    return 0;
}