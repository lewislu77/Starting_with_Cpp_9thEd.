//
// Created by Marcin Luberda on 27/01/2020.
//

#include <iostream>

using namespace std;

int main(){

    double fee {2500}, tax {0};

    cout << "\n\t1 - " << fee << endl;

    for(int i=2; i<=6; i++){

        tax = fee * 0.04;
        fee = fee + tax;
        cout << "\t" << i << " - " << fee << endl;
    }

    return  0;
}