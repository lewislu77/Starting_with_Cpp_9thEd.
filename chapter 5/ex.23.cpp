//
// Created by Marcin Luberda on 15/03/2020.
//

#include <iostream>

using namespace std;

int main(){


    for (int i = 1; i <= 10; i++){

        cout << "\t";

        for (int j = 1; j <= i; j++){
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= 10; i++){

        cout << "\t";

        for (int j = 1; j <= 11 - i; j++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}