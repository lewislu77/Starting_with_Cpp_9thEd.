//
// Created by Marcin Luberda on 30/10/2019.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    string m1, m2, m3;
    float op1, op2, op3, avr;

    cout << "\n\tŚREDNIA OPADÓW W TRZECH KOLEJNYCH MIESIĄCACH" << endl;

    cout << "\n\tPodaj miesiąc: ";
    cin >> m1;
    cout << "\tPodaj ilość opadów w mm: ";
    cin >> op1;
    cout << "\tPodaj miesiąc: ";
    cin >> m2;
    cout << "\tPodaj ilość opadów w mm: ";
    cin >> op2;
    cout << "\tPodaj miesiąc: ";
    cin >> m3;
    cout << "\tPodaj ilość opadów w mm: ";
    cin >> op3;

    avr = (op1 + op2 + op3) / 3;

    cout << "\n\tŚrednia opadów deszczu w miesiącach: " << m1 << ", " << m2 << " i " << m3 << " wyniosła " <<
    showpoint << setprecision(2) << fixed << avr << "mm." << endl;

    return 0;
}