//
// Created by Marcin Luberda on 16/11/2019.
//
#include <iostream>

using namespace std;

int main(){

    double mass, weight;

    cout << "\n\tPodaj masę przedmiotu w kg: ";
    cin >> mass;

    weight = mass * 9.8;

    if (weight < 10)
        cout << "\tPrzedmiot jest za lekki - " << static_cast<int>(weight) << " N.\n";
    else if (weight > 1000)
        cout << "\tPrzedmiot jest za ciężki - " << static_cast<int>(weight) << " N.\n";
    else
        cout << "\tCiężar przedmiotu - " << static_cast<int>(weight) << " N.\n";

    return 0;
}
