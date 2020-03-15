//
// Created by Marcin Luberda on 14/03/2020.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream  inputFile;
    int num, yr{1900};

    inputFile.open("ludzie.txt");

    cout << "\n\tWZROST POPULACJI PUSTKOWIA";
    cout << "\n\t     ( * = 1000 osob)";

    for (int i = 1; i <= 6; i++){

        cout << "\n\t" << yr << ": ";
        inputFile >> num;

            for (int j = 1; j <= num/1000; j++){
                cout << "*";
            }

        yr += 20;
    }

    cout << endl;

    inputFile.close();

    return 0;
}