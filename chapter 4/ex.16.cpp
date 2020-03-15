//
// Created by Marcin Luberda on 07/12/2019.
//

#include <iostream>

using namespace std;

int main(){

    string name1, name2, name3;
    double res1, res2, res3;

    cout << "\n\tPodaj imie pierwszego zawodnika i jego czas: ";
    cin  >> name1 >> res1;
    cout << "\tPodaj imie drugiego zawodnika i jego czas: ";
    cin  >> name2 >> res2;
    cout << "\tPodaj imie trzeciego zawodnika i jego czas: ";
    cin  >> name3 >> res3;

    if (res1 < res2 && res2 < res3)
        cout << "\n\tPierwssz miejce - " << name1 << "\n\tDrugie miejsce  - " << name2 << "\n\tTrzecie miejsce - " << name3 << endl;
    else if (res2 < res3 && res3 < res1)
        cout << "\n\tPierwssz miejce - " << name2 << "\n\tDrugie miejsce  - " << name3 << "\n\tTrzecie miejsce - " << name1 << endl;
    else if (res2 < res3 && res1 < res3)
        cout << "\n\tPierwssz miejce - " << name2 << "\n\tDrugie miejsce  - " << name1 << "\n\tTrzecie miejsce - " << name3 << endl;
    else if (res3 < res2 && res2 < res1)
        cout << "\n\tPierwssz miejce - " << name3 << "\n\tDrugie miejsce  - " << name2 << "\n\tTrzecie miejsce - " << name1 << endl;
    else
        cout << "\n\tPierwssz miejce - " << name3 << "\n\tDrugie miejsce  - " << name1 << "\n\tTrzecie miejsce - " << name2 << endl;

    return 0;
}