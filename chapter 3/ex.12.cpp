//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double F, C;

    cout << "\n\tTemperatura w stopniach Celsjusza: ";
    cin >> C;

    F = 9.0 / 5.0 * C + 32;

    cout << setprecision(1) << fixed;
    cout << "\tTemperatura w stopniach Fahrenheita: " << static_cast<double>(F) << endl;

    return 0;
}