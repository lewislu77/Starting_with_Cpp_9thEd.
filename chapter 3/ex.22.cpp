//
// Created by Marcin Luberda on 08/11/2019.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    double angle;

    cout << "\n\tMiara kąta w radianach: ";
    cin >> angle;

    cout << setprecision(4) << fixed;
    cout << "\n\tSIN kąta wynosi " << sin(angle) << endl;
    cout << "\tCOS kąta wynosi " << cos(angle) << endl;
    cout << "\tTAN kąta wynosi " << tan(angle) << endl;

    return 0;
}