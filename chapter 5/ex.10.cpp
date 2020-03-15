//
// Created by Marcin Luberda on 06/03/2020.
//

#include <iostream>

using namespace std;

int main(){

    int year;
    double fall, sum{0};

    cout << "\n\tPodaj liczbe lat: ";
    cin >> year;

        while (year < 1) {
            cout << "\tPodaj poprawna liczbę lat (>1): ";
            cin >> year;
        }
    for (int i = 1; i <= year; i++){

        for (int j = 1; j <= 12; j++){

            cout << "\tPodaj ilosc opadów w " << j << " miesiacu, " << i << " roku: ";
            cin >> fall;

                while ( fall < 0){
                    cout << "\tPodaj poprawna ilosc opadow (>0): ";
                    cin >> fall;
                }

            sum += fall;

        }
    }

    cout << "\n\tSuma opadow z " << year * 12 << " miesiecy wynosi " << sum << " mm." << endl;

    return 0;
}