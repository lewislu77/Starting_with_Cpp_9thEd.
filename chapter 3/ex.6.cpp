//
// Created by Marcin Luberda on 30/10/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const float SUGAR = 1.5, BUTTER = 1, FLOUR = 2.75;
    int cakes;
    float glass_s, glass_b, glass_f;

    cout << "\n\tOczekiwana ilość ciasteczek: ";
    cin >> cakes;

    glass_s = (SUGAR * cakes) / 48;
    glass_b = (BUTTER * cakes) / 48;
    glass_f = (FLOUR * cakes) / 48;

    cout << "\tDo przygotowania " << cakes << " ciasteczek potrzeba: " << setprecision(2) << glass_s << " szklanki(ek) cukru, "
            << setprecision(2) << glass_b << " szklanki(ek) masła, " << setprecision(2) << glass_f << " szklanki(ek) mąki." << endl;

    return 0;
}