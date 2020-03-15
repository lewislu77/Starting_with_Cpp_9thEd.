//
// Created by Marcin Luberda on 16/11/2019.
//
#include <iostream>
#include <cmath>
#include <iomanip>

using  namespace std;

int main(){

    double weight, height, BMI;

    cout << "\n\tPodaj swoją wagę w kg: ";
    cin >> weight;
    cout << "\tPodaj swój wzrost w m: ";
    cin >> height;

    BMI = weight / pow(height, 2);

    cout << setprecision(2) << fixed;

    if (BMI >= 18.5 && BMI <= 25)
        cout << "\tTwoja waga miesci sie w normie.\n" << "\tBMI = " << BMI << "\n";
    else if (BMI < 18.5)
        cout << "\tMasz niedowagę. BMI = " << BMI << "\n";
    else
        cout << "\tMasz nadwagę. BMI = " << BMI << "\n";

    return 0;
}
