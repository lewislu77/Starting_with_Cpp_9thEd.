//
// Created by Marcin Luberda on 08/11/2019.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    const double PI = 3.14159;
    double diameter, parts, n_parts, n_pizza, field, person;

    cout << "\n\tLiczna osób na przyjęciu: ";
    cin >> person;
    cout << "\tŚrednica zamawianej pizzy: ";
    cin >> diameter;

    field = PI * pow((diameter / 2) , 2);
    parts = field / 35.877;

    n_parts = person * 4;
    n_pizza = (n_parts * 35.877) / field;

    cout << setprecision(1) << fixed;
    cout << "\n\tIlość sztuk pizzy do zamówienia " << n_pizza << endl;

    return 0;
}