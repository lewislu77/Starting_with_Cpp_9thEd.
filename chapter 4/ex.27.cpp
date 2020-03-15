//
// Created by Marcin Luberda on 13/12/2019.
//

#include <iostream>

using namespace std;

int main(){

    string choice;

    cout << "\n\tTen program przeprowadzi cie krok po kroku w rozwiazaniu problemu polaczenia Wi-Fi.";
    cout << "\n\tPonownie uruchom komputer i sprobuj nawiazac polaczenie.";
    cout << "\n\tCzy to rozwiązało problem? (wpisz: tak lub nie) ";
    cin >> choice;

    if (choice == "nie") {
        cout << "\tPonownie uruchom router i sprobuj nawiazac polaczenie.";
        cout << "\n\tCzy to rozwiązało problem? (wpisz: tak lub nie) ";
        cin >> choice;
    }
        if (choice == "nie"){
            cout << "\tUpewnij sie o prawidlowym polaczeniu przewodem routera i modemu.";
            cout << "\n\tCzy to rozwiązało problem? (wpisz: tak lub nie) ";
            cin >> choice;
        }
            if (choice == "nie"){
                cout << "\tPrzenies router w inne miejsce i sprobuj nawiazac polaczenie.";
                cout << "\n\tCzy to rozwiązało problem? (wpisz: tak lub nie) ";
                cin >> choice;
            }
                if (choice == "nie")
                    cout << "\tKup nowy router.\n";

     if (choice == "tak")
         cout <<  "\tCiesze sie ze udalo sie nawiazac polaczenie Wi-Fi z routerem.\n";

    return 0;
}