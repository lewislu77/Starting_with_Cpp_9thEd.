//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    const int MIN_VAL = 1;
    const int MAX_VAL = 1000;

    int num1, num2, sum;

    unsigned seed = time(nullptr);
    srand(seed);

    num1 = random() % (MAX_VAL - MIN_VAL + 1) + MIN_VAL;
    num2 = random() % (MAX_VAL - MIN_VAL + 1) + MIN_VAL;
    sum = num1 + num2;

    cout << "\n\t" << setw(7) << num1 << endl;
    cout << "\t+" << setw(6) << num2 << endl;
    cout << "\t-------";
    cin.get();
    cout << "\t" << setw(7) << sum << endl;

    return 0;
}