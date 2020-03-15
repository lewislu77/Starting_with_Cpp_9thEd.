//
// Created by Marcin Luberda on 27/01/2020.
//

#include <iostream>

using namespace std;

int main(){

    double v, t, s;

    cout << "\n\tPodaj predkosc pojazdu w km/h: ";
    cin >> v;
        while (v < 0){
            cout << "\tPodaj poprawna predkosc pojazdu w km/h: ";
            cin >> v;
        }

    cout << "\tPodaj czas jazdy: ";
    cin >> t;
        while (t < 1) {
            cout << "\tPodaj poprawny czas jazdy w godzinach: ";
            cin >> t;
        }

    cout << "\n Godzina" << "\tPrzebyta odleglosc";

        for(int i = 1; i <= t; i++){
            s = v * i;
            cout << "\n\t" << i << "\t\t\t\t" << s;
        }

        cout << endl;


    return  0;
}