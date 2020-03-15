//
// Created by Marcin Luberda on 08/12/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int choice;
    double odo, time;

    cout << "\n\tWybierz ośrodek rozchodzenia sie dźwieku:\n\t1 - DWUTLENEK WĘGLA \n\t"
            "2 - POWIETRZE \n\t3 - HEL \n\t4 - WODÓR \n\n\t";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "\n\tDWUTLENEK WĘGLA";
            cout << "\n\tPodaj czas detekcji dźwieku (do 30 sek.): ";
            cin >> time;
            if (time > 0 && time <= 30) {
                odo = time * 258.0;
                cout << "\tOdległości od źródła dźwięku, to: " << setprecision(2) << fixed << odo << " m.\n";
            } else
                cout << "\tPodany czas przekroczył dopuszczalny zakres.";
            break;
        case 2:
            cout << "\n\tPOWIETRZE";
            cout << "\n\tPodaj czas detekcji dźwieku (do 30 sek.): ";
            cin >> time;
            if (time > 0 && time <= 30) {
                odo = time * 331.5;
                cout << "\tOdległości od źródła dźwięku, to: " << setprecision(2) << fixed << odo << " m.\n";
            } else
                cout << "\tPodany czas przekroczył dopuszczalny zakres.";
            break;
        case 3:
            cout << "\n\tHEL";
            cout << "\n\tPodaj czas detekcji dźwieku (do 30 sek.): ";
            cin >> time;
            if (time > 0 && time <= 30) {
                odo = time * 972.0;
                cout << "\tOdległości od źródła dźwięku, to: " << setprecision(2) << fixed << odo << " m.\n";
            } else
                cout << "\tPodany czas przekroczył dopuszczalny zakres.";
            break;
        case 4:
            cout << "\n\tWODÓR";
            cout << "\n\tPodaj czas detekcji dźwieku (do 30 sek.): ";
            cin >> time;
            if (time > 0 && time <= 30) {
                odo = time * 1270.0;
                cout << "\tOdległości od źródła dźwięku, to: " << setprecision(2) << fixed << odo << " m.\n";
            } else
                cout << "\tPodany czas przekroczył dopuszczalny zakres.";
            break;
        default:
            cout << "\n\tWybrałeś błędną pozycję menu.\n";
    }
    return 0;
}
