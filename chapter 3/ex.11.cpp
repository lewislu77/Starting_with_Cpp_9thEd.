//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float credit, fuel, insurance, month, year;

    cout << "\n\tKoszt kredytu: ";
    cin >> credit;
    cout << "\tKoszt paliwa: ";
    cin >> fuel;
    cout << "\tKoszt ubezpieczenia: ";
    cin >> insurance;

    month = credit + fuel + insurance;
    year = month * 12;

    cout << setprecision(2) << fixed;
    cout << "\n\tMiesięczny koszt samochodu, to " << month << " zł.\n";
    cout << "\tRoczny koszt samochodu, to " << year << " zł.\n";

    return 0;
}