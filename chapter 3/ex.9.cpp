//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const int CAKES = 30, CALORIES = 2748;

    float cakes, cal;

    cout << "\n\tLiczba zjedzonych ciasteczek (w opakowaniu 30 szt.): ";
    cin >> cakes;

    cal = (cakes * CALORIES) / CAKES;

    cout << "\tZjedzone ciasteczka to " << cal << " kalorii." << endl;

    return 0;
}