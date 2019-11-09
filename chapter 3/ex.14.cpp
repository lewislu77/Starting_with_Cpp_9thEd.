//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    string month;
    int year;
    double income, sale, tax;

    cout << "\n\tMiesiąc: ";
    getline(cin, month);
    cout << "\tRok: ";
    cin >> year;
    cout << "\tPrzychód całkowity: ";
    cin >> income;

    sale = income / 1.23;
    tax = income - sale;

    cout << "\n\tMIESIĄC: " << month << " - ROK - " << year << endl;
    cout << "\t-----------------------------------------";
    cout << setprecision(2) << fixed << endl;
    cout << "\tPrzychód całkowity:           " << setw(10) << right << income << endl;
    cout << "\tSprzedaż:                     " << setw(10) << right << sale << endl;
    cout << "\tPodatek VAT:                  " << setw(10) << right << tax << endl;

    return 0;
}
