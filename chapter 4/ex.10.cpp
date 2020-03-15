//
// Created by Marcin Luberda on 27/11/2019.
//

#include <iostream>

using namespace std;

int main(){

    int month, year;

    cout << "\n\tWprowadź miesiąc (1 -12): ";
    cin >> month;
    cout << "\tWprowadź rok: ";
    cin >> year;

    switch (month){
        case 1: cout << "\tLiczba dni miesiąca 31.\n";
            break;
        case 2:
            if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
                cout << "\tROK PRZESTĘPNY. Liczba dni miesiąca 29.\n";
            else
                cout << "\tLiczba dni miesiąca 28.\n";
            break;
        case 3: cout << "\tLiczba dni miesiąca 31.\n";
            break;
        case 4: cout << "\tLiczba dni miesiąca 30.\n";
            break;
        case 5: cout << "\tLiczba dni miesiąca 31.\n";
            break;
        case 6: cout << "\tLiczba dni miesiąca 30.\n";
            break;
        case 7: cout << "\tLiczba dni miesiąca 31.\n";
            break;
        case 8: cout << "\tLiczba dni miesiąca 31.\n";
            break;
        case 9: cout << "\tLiczba dni miesiąca 30.\n";
            break;
        case 10: cout << "\tLiczba dni miesiąca 31.\n";
            break;
        case 11: cout << "\tLiczba dni miesiąca 30.\n";
            break;
        case 12: cout << "\tLiczba dni miesiąca 31.\n";
            break;
        default:
            cout << "\tPodałeś nieprawidłowy miesiąc.\n";
    }

    return 0;
}