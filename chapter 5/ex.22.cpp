//
// Created by Marcin Luberda on 15/03/2020.
//

#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "\n\tPodaj liczbe rowna bokowi kwadratu: ";
    cin >> num;
    cout << endl;

    for (int i = 1; i <= num; i++){

        cout << "\t";

            for (int j = 1; j <= num; j++){
                cout << "#";
            }

        cout << endl;
    }

    return 0;
}