//
// Created by Marcin Luberda on 07/12/2019.
//

#include <iostream>

using namespace std;

int main(){

    double wave;

    cout << "\n\tPodaj długość fali elektromagnetycznej (w metrach): ";
    cin >> wave;

    if (wave >= 1E-2)
        cout << "\tFale radiowe.\n";
    else if (wave < 1E-2 && wave >= 1E-3)
        cout << "\tMikrofale.\n";
    else if (wave < 1E-3 && wave >= 7E-7)
        cout << "\tPodczerwień.\n";
    else if (wave < 7E-7 && wave >= 4E-7)
        cout << "\tŚwiatło widzialne.\n";
    else if (wave < 4E-7 && wave >= 1E-8)
        cout << "\tUltrafiolet.\n";
    else if (wave < 1E-8 && wave >= 1E-11)
        cout << "\tpromieniowanie rentgenowskie.\n";
    else
        cout << "\tPromieniowanie gamma.\n";

    return 0;
}