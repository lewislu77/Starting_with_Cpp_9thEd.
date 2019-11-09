//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    const double PI = 3.14159;
    double diameter, parts, field;

    cout << "\n\tŚrednica pizzy: ";
    cin >> diameter;

    field = PI * pow((diameter / 2) , 2);
    parts = field / 35.877;

    cout << setprecision(1) << fixed;
    cout << "\tPizza może zostać podzielona na " << parts << " kawałków" << endl;

    return 0;
}