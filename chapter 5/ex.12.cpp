//
// Created by Marcin Luberda on 07/03/2020.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double F;

     cout << endl;

    for (int C = 0; C <= 20; C++){

        F = 9.0 / 5.0 * C + 32;

        cout << setprecision(1) << fixed;
        cout << "\tTemperatura w stopniach Celsjusza: " << C << ", to w Fahrenheita: " << static_cast<double>(F) << endl;

    }

    return 0;
}