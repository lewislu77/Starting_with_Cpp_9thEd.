//
// Created by Marcin Luberda on 08/03/2020.
//

#include <iostream>

using namespace std;

int main(){

    int num, min, max, i{0};

    cout << "\n\tPodaj liczbe calkowita, gdy (-99) KONIEC.";
    cout << "\n\tTwoja liczba: ";
    cin >> num;

    min = num;
    max = num;

    while(true){

        cout << "\tTwoja liczba: ";
        cin >> num;
        i++;

        if(num == -99)
            break;

        if(num < min)
            min = num;

        if(num > max)
            max = num;
    }

    cout << "\n\tpodales " << i << " liczb" << endl;
    cout << "\twartosc min: " << min << "\n";
    cout << "\twartosc max: " << max << "\n";

    return 0;
}