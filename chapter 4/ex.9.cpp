//
// Created by Marcin Luberda on 27/11/2019.
//

#include <iostream>

using namespace std;

int main(){

    int g1 = 1, g2 = 2, g5 = 5, g10 = 10, g20 = 20, g50 = 50;
    int val1, val2, val3, val4, val5, val6, sum;

    cout << "\n\tGra 'Rozmień złotówkę'.\n";
    cout << "\n\tPodaj ilość monet  1gr: ";
    cin >> val1;
    cout << "\tPodaj ilość monet  2gr: ";
    cin >> val2;
    cout << "\tPodaj ilość monet  5gr: ";
    cin >> val3;
    cout << "\tPodaj ilość monet 10gr: ";
    cin >> val4;
    cout << "\tPodaj ilość monet 20gr: ";
    cin >> val5;
    cout << "\tPodaj ilość monet 50gr: ";
    cin >> val6;

    sum = g1*val1 + g2*val2 + g5*val3 + g10*val4 + g20*val5 + g50*val6;

    if (sum < 100)
        cout << "\n\tSuma wartości wprowadzonych monet jest miniejsza niż 1zł.\n";
    else if (sum > 100)
        cout << "\n\tSuma wartości wprowadzonych monet jest większa niż 1zł.\n";
    else
        cout << "\n\tGRATULACJE!!! Suma monet wynosi 1zł\n";

    return 0;
}