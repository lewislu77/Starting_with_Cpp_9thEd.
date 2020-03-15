//
// Created by Marcin Luberda on 15/03/2020.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    unsigned seed = time(nullptr);
    srand(seed);

    const int WART_MIN = 1;
    const int WART_MAX = 100;

    int num, ans;

    num = (rand() % (WART_MAX - WART_MIN + 1)) + WART_MIN;

        do {
            cout << "\n\tWylosowana liczba (1 - 100): ";
            cin >> ans;

            if (num > ans) {
                cout << "\tZa malo. Sprobuj jeszcze raz.";

            } else if (num < ans) {
                cout << "\tZa duzo. Sprobuj jeszcze raz.";

            }else {
                cout << "\tWygrales." << endl;

            }

        } while (ans != num);

    return 0;
}
