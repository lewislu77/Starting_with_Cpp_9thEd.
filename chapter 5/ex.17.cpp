//
// Created by Marcin Luberda on 14/03/2020.
//

#include <iostream>

using namespace std;

int main(){

    int sal1, sal2, sal3, sal4, sal5;

    cout << "\n\tSprzedaz sklep 1: ";
    cin >> sal1;
    cout << "\tSprzedaz sklep 2: ";
    cin >> sal2;
    cout << "\tSprzedaz sklep 3: ";
    cin >> sal3;
    cout << "\tSprzedaz sklep 4: ";
    cin >> sal4;
    cout << "\tSprzedaz sklep 5: ";
    cin >> sal5;

    cout << "\n\tWYKRES SLUPKOW SPRZEDAZY";
    cout << "\n\t    ( * = 100 PLN)";

    cout << "\n\tSklep 1: ";
    for (int i = 1; i <= sal1/100; i++){
        cout << "*";
    }

    cout << "\n\tSklep 2: ";
    for (int i = 1; i <= sal2/100; i++){
        cout << "*";
    }

    cout << "\n\tSklep 3: ";
    for (int i = 1; i <= sal3/100; i++){
        cout << "*";
    }

    cout << "\n\tSklep 4: ";
    for (int i = 1; i <= sal4/100; i++){
        cout << "*";
    }

    cout << "\n\tSklep 5: ";
    for (int i = 1; i <= sal5/100; i++){
        cout << "*";
    }

    cout << endl;

    return 0;
}