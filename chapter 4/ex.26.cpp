//
// Created by Marcin Luberda on 11/12/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char choice;
    double date, cost=0, lost1=0, lost1a=0, lost2=0, lost3=0;

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
            if (date > 4) {
                cost = (date - 4) * 10 + 39.99;
                cout << "\n\tKwota do zapłaty za usługi mobilne wynosi: " << setprecision(2) << fixed << cost << " €"
                     << endl;
                if (date >= 6 && date <= 8) {
                    lost1 = cost - 59.99;
                    cout << "\tOszczędności przy zakupie pakietu B wyniosą: " << setprecision(2) << fixed << lost1
                         << " €" << endl;
                }
                if (date > 8){
                    lost1a = ((date - 4) * 10 + 39.99) - ((date - 8) * 5 + 59.99);
                    cout << "\tOszczędności przy zakupie pakietu B wyniosą: " << setprecision(2) << fixed << lost1a
                         << " €" << endl;
                }
                if (date > 7) {
                    lost2 = cost - 69.99;
                    cout << "\tOszczędności przy zakupie pakietu C wyniosą: " << setprecision(2) << fixed << lost2
                         << " €" << endl;
                }
            }  else
                cout << "\n\tKwota do zapłaty za usługi mobilne wynosi: 39.99 €" << endl;
            break;
        case 'B':
            if (date > 8){
                cost = (date - 8) * 5 + 59.99;
                cout << "\n\tKwota do zapłaty za usługi mobilne wynosi: " << setprecision(2) << fixed << cost << " €" << endl;
                if (date > 10){
                    lost3 = cost - 69.99;
                    cout << "\tOszczędności przy zakupie pakietu C wyniosą: " << setprecision(2) << fixed << lost3 << " €" << endl;
                }
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
