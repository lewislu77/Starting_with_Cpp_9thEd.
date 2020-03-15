//
// Created by Marcin Luberda on 26/01/2020.
//
#include <iostream>

using namespace std;

int main(){

    double poz {0.0};

    cout << "\n\t";

    for (int i = 0; i <= 25; i++){

       poz += 1.5;
       cout << "rok " << i << "     poziom oceanu + " << poz - 1.5 << "mm" << "\n\t";
    }

    return 0;
}
