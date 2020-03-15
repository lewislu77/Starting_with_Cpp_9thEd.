//
// Created by Marcin Luberda on 16/11/2019.
//

#include <iostream>

using namespace std;

int main(){

    int num;
    cout << "\n\tPodaj liczbę z zakresu 1 - 10: ";
    cin >> num;

        switch (num)
        {
            case 1: cout << "\tW zapisie rzymskim - I\n";
                break;
            case 2: cout << "\tW zapisie rzymskim - II\n";
                break;
            case 3: cout << "\tW zapisie rzymskim - III\n";
                break;
            case 4: cout << "\tW zapisie rzymskim - IV\n";
                break;
            case 5: cout << "\tW zapisie rzymskim - V\n";
                break;
            case 6: cout << "\tW zapisie rzymskim - VI\n";
                break;
            case 7: cout << "\tW zapisie rzymskim - VII\n";
                break;
            case 8: cout << "\tW zapisie rzymskim - VIII\n";
                break;
            case 9: cout << "\tW zapisie rzymskim - IX\n";
                break;
            case 10: cout << "\tW zapisie rzymskim - X\n";
                break;
            default: cout << "\tPodałeś niepoprawną liczbę.\n";
        }

    return 0;
}