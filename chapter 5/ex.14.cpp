//
// Created by Marcin Luberda on 08/03/2020.
//

#include <iostream>

using namespace std;

int main(){

    int num, i{0};
    string name, f_name, l_name;

    cout << "\n\tLiczba uczniow w klasie (1 - 25): ";
    cin >> num;

    while (num < 1 || num > 25){
        cout << "\tPodaj prawidlowa liczbe uczniow: ";
        cin >> num;
    }

    cout << "\n\tPodaj imie ucznia: ";
    cin >> name;

    f_name = name;
    l_name = name;

    while (true){

        cout << "\tPodaj imie ucznia: ";
        cin >> name;
        i++;

        if(name < f_name)
            f_name = name;

        if(name > l_name)
            l_name = name;

        if (i == num - 1)
        break;

    }

    cout << "\n\tpierwsza osoba w kolejce uczniow - " << f_name << endl;
    cout << "\tostatnia osoba w kolejce uczniow - " << l_name << endl;

    return 0;
}