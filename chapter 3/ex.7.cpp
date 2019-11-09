//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    const float TICKET_ADULT = 10, TICKET_CHILD = 6, TAX = .2;

    int adult, child;
    float netto, brutto, dystrybutor;
    string title;

    cout << "\n\tPodaj tytuł filmu: ";
    getline(cin, title);
    cout << "\tIlość sprzedanych biletów dla dorosłych: ";
    cin >> adult;
    cout << "\tIlość sprzedanych biletów dla dzieci: ";
    cin >> child;

    brutto = TICKET_ADULT * adult + TICKET_CHILD * child;
    netto = brutto * TAX;
    dystrybutor = brutto - netto;

    cout << "\n\tTytuł filmu:                       " << setw(15) << right << title << endl;
    cout << setprecision(2) << fixed;
    cout << "\tSprzedane bilety dla dorosłych: " << setw(12) << right << adult << endl;
    cout << "\tSprzedane bilety dla dzieci:    " << setw(12) << right << child << endl;
    cout << "\tZysk kasy brutto:               " << setw(15) << right << brutto << " $." << endl;
    cout << "\tZysk kasy netto:                " << setw(15) << right << netto << " $." << endl;
    cout << "\tKwota zapłacona dystrybutorowi: " << setw(15) << right << dystrybutor << " $." << endl;

    return 0;

}
