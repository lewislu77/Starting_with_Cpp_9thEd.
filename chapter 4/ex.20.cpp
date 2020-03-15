//
// Created by Marcin Luberda on 08/12/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int choice;
    double odo=0, time;

    cout << "\n\tWybierz ośrodek rozchodzenia sie dźwieku:\n\t1 - POWIETRZE \n\t2 - WODA \n\t3 - STAL \n\n\t";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "\n\tPOWIETRZE";
            cout << "\n\tPodaj odległość do pokonania przez dźwiek: ";
            cin >> odo;
            if (odo > 0 ) {
                time = odo / 343;
                cout << "\tCzas pokonania tej odległości to: " << setprecision(2) << fixed << time << " sek.\n";
            } else
                cout << "\tOdległość nie może być ujemna.";
            break;
        case 2:
            cout << "\n\tWODA";
            cout << "\n\tPodaj odległość do pokonania przez dźwiek: ";
            cin >> odo;
            if (odo > 0 ) {
                time = odo / 1490;
                cout << "\tCzas pokonania tej odległości to: " << setprecision(2) << fixed << time << " sek.\n";
            } else
                cout << "\tOdległość nie może być ujemna.";
            break;
        case 3:
            cout << "\n\tSTAL";
            cout << "\n\tPodaj odległość do pokonania przez dźwiek: ";
            cin >> odo;
            if (odo > 0 ) {
                time = odo / 5100;
                cout << "\tCzas pokonania tej odległości to: " << setprecision(2) << fixed << time << " sek.\n";
            } else
                cout << "\tOdległość nie może być ujemna.";
            break;
        default:
            cout << "\n\tWybrałeś błędną opcję.\n";
    }
    return 0;
}
