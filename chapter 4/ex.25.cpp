//
// Created by Marcin Luberda on 10/12/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char choice;
    double date, cost=0;

    cout << "\n\t*** USŁUGI MOBILNE ***";
    cout << "\n\t       Pakiet A";
    cout << "\n\t       Pakiet B";
    cout << "\n\t       Pakiet C";
    cout << "\n\t     Wybież Pakiet: ";
    cin >> choice;
    cout << "\tIlość wykorzystanych Gigabajtów: ";
    cin >> date;

    switch (choice){
        case 'A':
            if (date > 4){
                cost = (date - 4) * 10 + 39.99;
                cout << "\n\tKwota do zapłaty za usługi mobilne wynosi: " << setprecision(2) << fixed << cost << " €" << endl;
            } else
                cout << "\n\tKwota do zapłaty za usługi mobilne wynosi: 39.99 €" << endl;
            break;
        case 'B':
            if (date > 8){
                cost = (date - 8) * 5 + 59.99;
                cout << "\n\tKwota do zapłaty za usługi mobilne wynosi: " << setprecision(2) << fixed << cost << " €" << endl;
            } else
                cout << "\n\tKwota do zapłaty za usługi mobilne wynosi: 59.99 €" << endl;
            break;
        case 'C':
                cout << "\n\tKwota do zapłaty za usługi mobilne wynosi: 69.99 €" << endl;
            break;
        default:
            cout << "\n\tWybrano nieprawidłowy pakiet.";
            break;
    }
    return 0;
}