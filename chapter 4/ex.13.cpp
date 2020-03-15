//
// Created by Marcin Luberda on 05/12/2019.
//

#include <iostream>

using namespace std;

int main(){

    int books;

    cout << "\n\tLiczba zakupionych książek: ";
    cin >> books;

    if (books == 1)
        cout << "\tPrzyznane punkty to 5.\n";
    else if (books == 2)
        cout << "\tPrzyznane punkty to 15.\n";
    else if (books == 3)
        cout << "\tPrzyznane punkty to 30.\n";
    else if (books >= 4)
        cout << "\tPrzyznane punkty to 60.\n";
    else
        cout << "\tNie kupiłeś żadnej książki. Przyznane punkty to 0.\n";

    return 0;
}