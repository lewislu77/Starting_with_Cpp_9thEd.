//
// Created by Marcin Luberda on 05/12/2019.
//

#include <iostream>

using namespace std;

int main() {

    double weight, odo = 0, odo1 = 0, cost = 0;

    cout << "\n\tWaga paczki (do 20 kg): ";
    cin >> weight;
    cout << "\tOdległość transportu (w km): ";
    cin >> odo;

    if (odo > 0 && odo <= 500)
        odo1 = 1;
    else if (odo > 500)
        odo1 = static_cast<int>(odo / 500);
    else
        cout << "\tOdległość nie może być ujemna.\n\tZlecenie nie może być zrealizowane.\n";

    if (weight > 0 && weight <= 2) {
        cost = odo1 * 1.1;
        cout << "\tKoszt przesyłki wynosi " << cost << endl;
    } else if (weight > 2 && weight <= 6){
        cost = odo1 * 2.2;
        cout << "\tKoszt przesyłki wynosi " << cost << endl;
    } else if (weight > 6 && weight <= 10) {
        cost = odo1 * 3.7;
        cout << "\tKoszt przesyłki wynosi " << cost << endl;
    } else if (weight > 10 && weight <= 20) {
        cost = odo1 * 4.8;
        cout << "\tKoszt przesyłki wynosi " << cost << endl;
    } else
        cout << "\tPodałeś nieprawidłową wagę paczki.\n";

    return 0;
}