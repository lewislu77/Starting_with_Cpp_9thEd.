//
// Created by Marcin Luberda on 08/12/2019.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    const double PI = 3.14159;

    int choice;
    double r, p_k=0, a, b, p_p=0, d, h, p_t=0;

    cout << "\n\t*** KALKULATOR GEOMETRYCZNY ***";
    cout << "\n\t1 - Oblicz pole koła";
    cout << "\n\t2 - Oblicz pole prostokąta";
    cout << "\n\t3 - Oblicz pole trójkata";
    cout << "\n\t4 - Zakończ program";
    cout << "\n\tWpisz swój wybór (1 - 4): ";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "\n\tPodaj wymiar promienia koła: ";
            cin >> r;
            if (r > 0){
                p_k = PI * pow(r,2);
                cout << "\tPole koła wynosi: " << setprecision(2) << fixed << p_k << endl;
            } else
                cout << "\tWymiar nie może być ujemny.\n";
            break;
        case 2:
            cout << "\n\tPodaj wymiary boków prostokąta: ";
            cin >> a >> b;
            if (a > 0 && b > 0){
                p_p = a * b;
                cout << "\tPole prostokąta wynosi: " << setprecision(2) << fixed << p_p << endl;
            } else
                cout << "\tWymiary nie mogą być ujemne.\n";
            break;
        case 3:
            cout << "\n\tPodaj wymiar podstawy i wysokości trójkąta: ";
            cin >> d >> h;
            if (d > 0 && h > 0){
                p_t = d * h * 0.5;
                cout << "\tPole trójkąta wynosi: " << setprecision(2) << fixed << p_t << endl;
            } else
                cout << "\tWymiary nie mogą być ujemne.\n";
            break;
        case 4:
            cout << "\n\tKONIEC PROGRAMU\n";
            break;
        default:
            cout << "\n\tPodano opcję poza zakresem wyboru (1-4).\n";
            break;
    }

    return 0;
}