//
// Created by Marcin Luberda on 13/03/2020.
//

#include <iostream>

using namespace std;

int main(){

    int num;
    double sal_brut{0.0}, sal_total{0.0}, tax{0.0}, tax_total{0.0}, ins{0.0}, ins_total{0.0};

    cout << "\n\tPodaj numer pracownika (gdy 0 - koniec programu): ";
    cin >> num;

    while (num != 0){

        cout << "\n\tPensja brutto: ";
        cin >> sal_brut;
        while (sal_brut < 1){
            cout << "\tWartosc nie moze byc ujemna. Wprowadz ponownie: ";
            cin >> sal_brut;
        }
        sal_total += sal_brut;

        cout << "\tZaliczka na podatek: ";
        cin >> tax;
        while (tax < 1 || tax > sal_brut){
            cout << "\tWartosc nie moze byc ujemna lub wieksza od pensji. Wprowadz ponownie: ";
            cin >> tax;
        }

        cout << "\tSkładka ubezpieczeniowa: ";
        cin >> ins;
        while (ins < 1 || ins > sal_brut){
            cout << "\tWartosc nie moze byc ujemna lub wieksza od pensji. Wprowadz ponownie: ";
            cin >> ins;
        }

        while (tax + ins > sal_brut){

            cout << "\n\tPodane wartosci sa bledne, przewyzszaja wysokosc wynagrodzenia.\n\t"
                    "Wprowadz dane jeszcze raz.";


            cout << "\n\tZaliczka na podatek: ";
            cin >> tax;
            while (tax < 1 || tax > sal_brut){
                cout << "\tWartosc nie moze byc ujemna lub wieksza od pensji. Wprowadz ponownie: ";
                cin >> tax;
            }

            cout << "\tSkładka ubezpieczeniowa: ";
            cin >> ins;
            while (ins < 1 || ins > sal_brut){
                cout << "\tWartosc nie moze byc ujemna lub wieksza od pensji. Wprowadz ponownie: ";
                cin >> ins;
            }

        }

        tax_total += tax;
        ins_total += ins;

        cout << "\n\tPodaj numer pracownika (gdy 0 - koniec programu): ";
        cin >> num;

    }

    cout << "\n\tTygodniowy raport plac.";
    cout << "\n\tPensje : " << sal_total << " Podatki: " << tax_total << " Ubezpieczenia: " << ins_total << endl;

    return 0;
}