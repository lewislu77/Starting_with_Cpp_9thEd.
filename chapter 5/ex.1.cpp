//
// Created by Marcin Luberda on 26/01/2020.
//
#include <iostream>

using namespace std;

int main() {

    int num {0}, total {0};

    cout << "\n\tPodaj dodatnią liczbę całkowitą: ";
    cin >> num;

    while (num < 0)
        {
            cout << "\tBŁĄD. Podałeś liczbę ujemną. \n\tPodaj dodatnią: ";
            cin >> num;
        }

    for (int count = 1; count <= num; count++ )
        {
            total += count;
        }

    cout << "\tSuma " << num << " liczb wynosi " << total << endl;

    return 0;
}
