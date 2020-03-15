//
// Created by Marcin Luberda on 29/02/2020.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    const int   ADD = 1,
                SUB = 2,
                MULTI = 3,
                DIV = 4,
                QUIT = 5;

    int MIN_VAL, MAX_VAL, choice;
    double num1{0.0}, num2{0.0}, ans, sum, sub, multi, div;

    unsigned seed = time(nullptr);
    srand(seed);

    do {
        cout << "\n\tMENU: \n\t (1)DODAWANIE \n\t (2)ODEJMOWANIE \n\t (3)MNOZENIE \n\t (4)DZIELENIE \n\t (5)KONIEC PROGRAMU ";
        cin >> choice;

        while (choice < ADD || choice > QUIT) {

            cout << "\tNiepoprawny wybor. Prosze ponownie wybrac opcje (1 - 5): ";
            cin >> choice;
        }

        if (choice != QUIT){

            cout << "\n\tPodaj dolny zakres liczb: ";
            cin >> MIN_VAL;
            cout << "\tPodaj górny zakres liczb: ";
            cin >> MAX_VAL;

            num1 = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
            num2 = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
        }

        switch (choice) {

            case ADD:
                sum = num1 + num2;

                cout << "\n\t" << setw(7) << num1 << endl;
                cout << "\t+" << setw(6) << num2 << endl;
                cout << "\t-------\n";
                cin >> ans;

                if (ans == sum) {
                    cout << "\t" << setw(7) << ans << endl;
                    cout << "\tGratulacje. To jest poprawny wynik.\n";
                } else {
                    cout << "\t" << setw(7) << sum << endl;
                    cout << "\tPopełniłeś błąd. To jest poprawny wynik.\n";
                }
                break;

            case SUB:
                sub = num1 - num2;

                cout << "\n\t" << setw(7) << num1 << endl;
                cout << "\t-" << setw(6) << num2 << endl;
                cout << "\t-------\n";
                cin >> ans;

                if (ans == sub) {
                    cout << "\t" << setw(7) << ans << endl;
                    cout << "\tGratulacje. To jest poprawny wynik.\n";
                } else {
                    cout << "\t" << setw(7) << sub << endl;
                    cout << "\tPopełniłeś błąd. To jest poprawny wynik.\n";
                }
                break;

            case MULTI:
                multi = num1 * num2;

                cout << "\n\t" << setw(7) << num1 << endl;
                cout << "\t*" << setw(6) << num2 << endl;
                cout << "\t-------\n";
                cin >> ans;

                if (ans == multi) {
                    cout << "\t" << setw(7) << ans << endl;
                    cout << "\tGratulacje. To jest poprawny wynik.\n";
                } else {
                    cout << "\t" << setw(7) << multi << endl;
                    cout << "\tPopełniłeś błąd. To jest poprawny wynik.\n";
                }
                break;

            case DIV:
                div = num1 / num2;

                cout << "\n\t" << setw(7) << num1 << endl;
                cout << "\t/" << setw(6) << num2 << endl;
                cout << "\t-------\n";
                cin >> ans;

                if (ans == div) {
                    cout << "\t" << setw(7) << ans << endl;
                    cout << "\tGratulacje. To jest poprawny wynik.\n";
                } else {
                    cout << "\t" << setw(7) << div << endl;
                    cout << "\tPopełniłeś błąd. To jest poprawny wynik.\n";
                }
                break;

            default:
                cout << "\tKONIEC.";
                break;
        }
    } while (choice != QUIT);

    return 0;
}