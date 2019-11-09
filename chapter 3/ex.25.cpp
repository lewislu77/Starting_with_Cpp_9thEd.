//
// Created by Marcin Luberda on 08/11/2019.
//

#include <iostream>
#include <string>

using namespace std;

int main(){

    string name, age, town, school, job, pet, pet_name;

    cout << "\n\tPodaj imię: ";
    getline(cin, name);
    cout << "\tPodaj wiek: ";
    getline(cin, age);
    cout << "\tPodaj nazwę miasta: ";
    getline(cin, town);
    cout << "\tPodaj nazwę szkoły: ";
    getline(cin, school);
    cout << "\tPodaj zawód: ";
    getline(cin, job);
    cout << "\tPodaj gatunek zwierzęcia: ";
    getline(cin, pet);
    cout << "\tPodaj imię zwierzęcia: ";
    getline(cin, pet_name);

    cout << "\n\tByła sobie raz osoba o imieniu " << name << ", która mieszkała w mieście " << town <<
            ". \n\tW wieku " << age <<  " " << name << " poszedł do szkoły " << school << ". " << name << " zakończył naukę i zaczął pracę jako " <<
            job << ". \n\tNastępnie " << name << " adpotował zwierzę, którym był " << pet << " o imieniu " << pet_name << ". Oboje żyli razem długo i szczęśliwie."
            << endl;

    return 0;
}