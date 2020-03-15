//
// Created by Marcin Luberda on 15/03/2020.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream inputFile;
    int num, i{0}, sum{0}, avr{0};

    inputFile.open("Losowe.txt");

    while (inputFile >> num){

        i++;
        sum += num;
        avr = sum / i;
    }

    inputFile.close();

    cout << "\n\tIlosc liczb: " << i << endl;
    cout << "\tSuma liczb:  " << sum << endl;
    cout << "\tŚrednia liczb: " << avr << endl;

    return 0;
}