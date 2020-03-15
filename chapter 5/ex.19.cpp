//
// Created by Marcin Luberda on 14/03/2020.
//

#include <iostream>

using namespace std;

int main(){

    double budget, pass;

    cout << "\n\tMiesieczny budzet: ";
    cin >> budget;

    cout << "\tKoniec zliczania wydatkow gdy (-1)." << endl;

    do{

        cout << "\tWydatek : ";
        cin >> pass;
        budget -= pass;

    }while (pass != -1);


    if (budget > 0){
        cout << "\n\tJestes na plusie :-)" << endl;
    } else
        cout << "\n\tJestes splukany :-(" << endl;


    return 0;
}
