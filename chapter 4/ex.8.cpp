//
// Created by Marcin Luberda on 27/11/2019.
//

#include <iostream>
#include <string>

using namespace std;

int main(){

    string kol1 = "czerwony";
    string kol2 = "niebieski";
    string kol3 = "żółty";
    string k1, k2;

    cout << "\n\tPodaj dwa z trzech kolorów: czerwony, niebieski, żółty.\n";
    cout << "\tKolor pierwszy: ";
    cin >> k1;
    cout << "\tKolor drugi: ";
    cin >> k2;

    if ((k1==kol1 && k2==kol2) || (k2==kol1 && k1==kol2))
        cout << "\tOtrzymany kolor to FIOLETOWY.\n";
    else if ((k1==kol1 && k2==kol3) || (k2==kol1 && k1==kol3))
        cout << "\tOtrzymany kolor to POMARANCZOWY.\n";
    else if ((k1==kol2 && k2==kol3) || (k2==kol2 && k1==kol3))
        cout << "\tOtrzymany kolor to ZIELONY.\n";
    else
        cout << "\tPodałeś niepoprawne kolory.\n";

    return 0;
}