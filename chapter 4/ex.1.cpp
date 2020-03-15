//
// Created by Marcin Luberda on 16/11/2019.
//

#include <iostream>

using namespace std;

int main() {

    int num1, num2;

    cout << "\n\tPodaj dwie liczby całkowite oddzielone spacją: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        cout << "\tWiększą liczbą jest " << num1 << endl;
    else
        cout << "\tWiększą liczbą jest " << num2 << endl;

    return 0;
}