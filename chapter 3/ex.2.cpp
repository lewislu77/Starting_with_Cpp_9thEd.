//
// Created by Marcin Luberda on 01/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double ticket_A = 15;
    const double ticket_B = 12;
    const double ticket_C = 9;

    double t_A, t_B, t_C, sum;

    cout << "\n\tSprzedaż biletów - sektor A: ";
    cin >> t_A;
    cout << "\tSprzedaż biletów - sektor B: ";
    cin >> t_B;
    cout << "\tSprzedaż biletów - sektor C: ";
    cin >> t_C;

    sum = (ticket_A * t_A) + (ticket_B * t_B) + (ticket_C * t_C);

    cout << "\n\tDochód ze sprzedaży biletów wyniósł: " << showpoint << setprecision(2) << fixed << sum << "zł.\n";

    return 0;
}
