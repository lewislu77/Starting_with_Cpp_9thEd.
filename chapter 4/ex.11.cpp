//
// Created by Marcin Luberda on 01/12/2019.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int MIN_VAL, MAX_VAL;
    int num1, num2, ans, sum;

    unsigned seed = time(nullptr);
    srand(seed);

    cout << "\n\tPodaj dolny zakres liczb: ";
    cin >> MIN_VAL;
    cout << "\tPodaj górny zakres liczb: ";
    cin >> MAX_VAL;

    num1 = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
    num2 = (rand() % (MAX_VAL - MIN_VAL + 1)) + MIN_VAL;
    sum = num1 + num2;

    cout << "\n\t" << setw(7) << num1 << endl;
    cout << "\t+" << setw(6) << num2 << endl;
    cout << "\t-------\n";
    cin >> ans;

    if (ans == sum) {
        cout << "\t" << setw(7) << ans << endl;
        cout << "\tGratulacje. To jest poprawny wynik.\n";
    }
    else {
        cout << "\t" << setw(7) << sum << endl;
        cout << "\tPopełniłeś błąd. To jest poprawny wynik.\n";
    }
    return 0;
}