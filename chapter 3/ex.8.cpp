//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const float TOY_WEIGHT = 12.5;

    float palete, palete_total, toys;

    cout << "\n\tWaga palety (kg): ";
    cin >> palete;
    cout << "\tWaga palety z towarem (kg): ";
    cin >> palete_total;

    toys = (palete_total - palete) / TOY_WEIGHT;

    cout << "\tNa palecie znajduje się " << static_cast<int>(toys) << " sztuk towaru." << endl;

    return 0;
}