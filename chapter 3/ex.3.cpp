//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    float t1, t2, t3, t4, t5, avr;

    cout << "\n\tPodaj wynik 1 testu: ";
    cin >> t1;
    cout << "\tPodaj wynik 2 testu: ";
    cin >> t2;
    cout << "\tPodaj wynik 3 testu: ";
    cin >> t3;
    cout << "\tPodaj wynik 4 testu: ";
    cin >> t4;
    cout << "\tPodaj wynik 5 testu: ";
    cin >> t5;

    avr = (t1 + t2 + t3 + t4 + t5) / 5;

    cout << "\n\tŚredni wynik z testów wynosi: " << setprecision(1) << fixed << showpoint << avr << endl;

    return 0;
}