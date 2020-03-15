//
// Created by Marcin Luberda on 16/11/2019.
//

#include <iostream>

using namespace std;

int main(){

    int day, month, year;
    cout << "\n\tPodaj dzień, miesiąc i rok (ostatnie dwie cyfry): ";
    cin >> day >> month >> year;

    if (day * month == year)
        cout << "\tPodałeś magiczną datę !!!\n";
    else
        cout << "\tPodana data nie jest magiczna.\n";

    return 0;
}