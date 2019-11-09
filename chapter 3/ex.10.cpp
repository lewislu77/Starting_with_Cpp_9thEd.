//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const float INSURANCE = .8;
    float cost, min_insur;

    cout << "\n\tKoszt zastapienia budynku: ";
    cin >> cost;

    min_insur = cost * INSURANCE;

    cout << "\tMinimalna wielkość ubezpieczenia, to: "  << static_cast<double>(min_insur) << " zł." << endl;

    return 0;
}
