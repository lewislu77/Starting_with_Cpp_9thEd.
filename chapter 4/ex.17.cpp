//
// Created by Marcin Luberda on 07/12/2019.
//

#include <iostream>

using namespace std;

int main(){

    string name, date1, date2, date3;
    double res1, res2, res3;

    cout << "\n\tPodaj imie tyczkarza: ";
    cin  >> name;
    cout << "\tPodaj datę I zawodów i wysokość poprzeczki: ";
    cin >> date1 >> res1;
    cout << "\tPodaj datę II zawodów i wysokość poprzeczki: ";
    cin >> date2 >> res2;
    cout << "\tPodaj datę III zawodów i wysokość poprzeczki: ";
    cin >> date3 >> res3;

    if ((res1 < 2 || res1 > 5) || (res2 < 2 || res2 > 5) || (res3 < 2 || res3 > 5))
        cout << "\n\tPodałeś nieakceptowalny zakres ustalonej wysokości poprzeczki (2.0m - 5.0m)\n";
    else {

        cout << "\n\tWyniki tyczkarza " << name << ", to:";

        if (res1 > res2 && res2 > res3)
            cout << "\n\tNajlepszy wynik - " << date1 << " - " << res1 <<
                 "\n\tDrugi wynik     - " << date2 << " - " << res2 <<
                 "\n\tTrzeci wynik    - " << date3 << " - " << res3 << endl;

        else if (res2 > res3 && res3 > res1)
            cout << "\n\tNajlepszy wynik - " << date2 << " - " << res2 <<
                 "\n\tDrugi wynik     - " << date3 << " - " << res3 <<
                 "\n\tTrzeci wynik    - " << date1 << " - " << res1 << endl;

        else if (res2 > res3 && res1 > res3)
            cout << "\n\tNajlepszy wynik - " << date2 << " - " << res2 <<
                 "\n\tDrugi wynik     - " << date1 << " - " << res1 <<
                 "\n\tTrzeci wynik    - " << date3 << " - " << res3 << endl;

        else if (res3 > res2 && res2 > res1)
            cout << "\n\tNajlepszy wynik - " << date3 << " - " << res3 <<
                 "\n\tDrugi wynik     - " << date2 << " - " << res2 <<
                 "\n\tTrzeci wynik    - " << date1 << " - " << res1 << endl;

        else
            cout << "\n\tNajlepszy wynik - " << date3 << " - " << res3 <<
                 "\n\tDrugi wynik     - " << date1 << " - " << res1 <<
                 "\n\tTrzeci wynik    - " << date2 << " - " << res2 << endl;
    }
    return 0;
}
