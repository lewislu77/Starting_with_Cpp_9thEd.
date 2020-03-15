//
// Created by Marcin Luberda on 29/02/2020.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double floor, room, room_occ{0}, room_total{0}, room_free{0},room_occ_total{0}, room_free_perc, room_occ_perc;

    cout << "\n\tPodaj liczbe pieter: ";
    cin >> floor;

    while (floor < 1){
        cout << "\tPodaj poprawna liczbe pieter: ";
        cin >> floor;
    }
    for (int i = 1; i <= floor; i++){

            cout << "\tPodaj liczbe pokoi na pietrze " << i << ": ";
            cin >> room;
            room_total += room;

            while (room < 10) {
                cout << "\tPodaj poprawna liczbe pokoi (min. 10): ";
                cin >> room;
            }

            cout << "\tPodaj liczbe zajetych pokoi na pietrze " << i << ": ";
            cin >> room_occ;
            room_occ_total += room_occ;

            //pomijanie 13 pietra
            if (i == 12) {
                ++i;
            }
        }

    room_free = room_total - room_occ_total;
    room_free_perc = (room_free / room_total) * 100;
    room_occ_perc = (room_occ_total / room_total) * 100;

    cout << "\tCałkowita liczba pokoi - " << room_total << "\n\tLiczba wolnych pokoi - " << room_free <<
            "\n\tLiczba zajetych pokoi - " << room_occ_total << "\n\tWolne pokoje - " << setprecision(2) << room_free_perc << " %" <<
            "\n\tZajete pokoje - " << setprecision(2) << room_occ_perc << " %";

    return 0;
}