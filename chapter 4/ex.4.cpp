//
// Created by Marcin Luberda on 16/11/2019.
//
#include <iostream>

using namespace std;

int main(){

    double b1, b2, b3, b4, area1, area2;

    cout << "\n\tPodaj wymiary boków pierwszego prostokąta: ";
    cin >> b1 >> b2;
    cout << "\tPodaj wymiary boków drugiego prostokąta: ";
    cin >> b3 >> b4;

    area1 = b1 * b2;
    area2 = b3 * b4;

    if (area1 > area2)
        cout << "\tPole pierwszego prostokąta jest wieksze.\n";
    else if (area1 < area2)
        cout << "\tPole drugiego prostokąta jest wieksze.\n";
    else
        cout << "\tPola prostokątów sa równe.\n";

    return 0;
}
