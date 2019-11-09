//
// Created by Marcin Luberda on 30/10/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int ch, dz;
    float p_ch, p_dz;

    cout << "\n\tPodzj liczbę dziewcząt w klasie: ";
    cin >> dz;
    cout << "\tPodaj liczbę chłopców w klasie: ";
    cin >> ch;

    p_ch = (static_cast<float>(ch) / (ch + dz)) * 100;
    p_dz = (static_cast<float>(dz) / (ch + dz)) * 100;

    cout << "\tDziewczęta stanowią " << static_cast<int>(p_dz) << "%, a chłopcy " << static_cast<int>(p_ch) << "% klasy" << endl;

    return 0;
}