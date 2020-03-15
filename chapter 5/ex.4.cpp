//
// Created by Marcin Luberda on 26/01/2020.
//
#include <iostream>

using namespace std;

int main(){

    int c {1};
    double cal {0.0};

    cout << "\n\t";

    for (int i = 5; i <= 30; i += 5)
    {
        cal = i * 3.6;
        cout << "\n\t" << c << " czas biegu " << i << " min   -   spalone kalorie " << cal << " cal.";
        c++;
    }


    cout << "\n";

    return 0;
}
