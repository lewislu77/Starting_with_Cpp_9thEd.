//
// Created by Marcin Luberda on 26/01/2020.
//

#include <iostream>

using namespace std;

int main(){

    cout << "\n\t";

    for (char i = 33; i < 127; i++)
    {
            cout << i << " ";

            if (i % 16 == 0)
                cout <<  "\n\t";
    }

    cout << "\n";

    return 0;
}
