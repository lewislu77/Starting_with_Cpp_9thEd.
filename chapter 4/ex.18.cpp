//
// Created by Marcin Luberda on 07/12/2019.
//

#include <iostream>

using namespace std;

int main(){

    double cal, fat, cal_fat, cal_fat_percent=0;

    cout << "\n\tPodaj wartość kaloryczną potrawy: ";
    cin >> cal;
    cout << "\tPodaj zawartość tłuszczu w potrawie (w g): ";
    cin >> fat;

    cal_fat = fat * 9;
    cal_fat_percent = (cal_fat / cal) * 100;

    if (cal <= 0 || fat < 0 || cal < cal_fat)
        cout << "\n\tBŁĄD. Podano niepoprawną liczbę kalorii lub zawartości tłuszczu.\n";
    else{
        if (static_cast<int>(cal_fat_percent) < 30){
            cout << "\n\tPOTRAWA NISKOKALORYCZNA.\n\tKalorie tłuszczopochodne w potrawie stanowią " << static_cast<int> (cal_fat_percent) << "%\n";
        } else
            cout << "\n\tKalorie tłuszczopochodne w potrawie stanowią " << static_cast<int> (cal_fat_percent) << "%\n";
    }

    return 0;
}