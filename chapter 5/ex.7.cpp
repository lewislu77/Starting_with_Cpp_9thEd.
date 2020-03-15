//
// Created by Marcin Luberda on 27/01/2020.
//

#include <iostream>

using namespace std;

int main(){

    int day{0};
    double sum {0}, total {1};

    cout << "\n\tPodaj liczbę dni: ";
    cin >> day;

    while (day < 1){
        cout << "\tPodałeś ujemną liczbę dni. Popraw dane: ";
        cin >> day;
    }

    cout << "\n";
    cout << "\tWynagrodzenie " << 1 << " dnia wynosi " << total/100 << " PLN." << endl;

    for(int i=1; i < day; i++){

        total *= 2;
        sum += total;

        cout << "\tWynagrodzenie " << i+1 << " dnia wynosi " << total/100 << " PLN." << endl;
    }

    cout << "\n\tSuma wynagrodzenia z " << day << " dni wynosi " << sum/100 + 0.01 << " PLN." << endl;

    return 0;
}