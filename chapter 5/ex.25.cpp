//
// Created by Marcin Luberda on 15/03/2020.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream inputFile;
    string name, f_name, l_name;
    int i{1};

    inputFile.open("Kolejka.txt");
    inputFile >> name;
    f_name = name;
    l_name = name;

    while (inputFile >> name){

        i++;

        if(name < f_name)
            f_name = name;

        if(name > l_name)
            l_name = name;

    }

    inputFile.close();

    cout << "\n\tLiczba uczniow: " << i << endl;
    cout << "\n\tpierwsza osoba w kolejce uczniow - " << f_name << endl;
    cout << "\tostatnia osoba w kolejce uczniow - " << l_name << endl;

    return 0;
}