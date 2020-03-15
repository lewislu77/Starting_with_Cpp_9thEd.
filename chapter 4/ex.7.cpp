//
// Created by Marcin Luberda on 16/11/2019.
//
#include <iostream>

using  namespace std;

int main(){

    float seconds, minutes, hours, days;

    cout << "\n\tPodaj liczbę sekund: ";
    cin >> seconds;

    if (seconds >= 60 && seconds < 3600)
        {
        minutes = seconds / 60;
        cout << "\t" << static_cast<int>(minutes) << " min.\n";
        }
    else if (seconds >= 3600 && seconds < 86400)
        {
        hours = seconds / 3600;
        cout << "\t" << static_cast<int>(hours) << " godz.\n";
        }
    else if (seconds >= 86400)
        {
        days = seconds / 86400;
        cout << "\t" << static_cast<int>(days) << " dzień/dni.\n";
        }
    else
        cout << "\t" << seconds << " sek.\n";

    return 0;
}
