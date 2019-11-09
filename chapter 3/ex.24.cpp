//
// Created by Marcin Luberda on 08/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double V, R, E, S;

    cout << "\n\tDługość szpaleru (w m): ";
    cin >> R;
    cout << "\tPrzestrzeń zajmowana przez skrajny słupek (w m): ";
    cin >> E;
    cout << "\tPrzestrzeń między winoroślami (w m): ";
    cin >> S;

    V = (R - 2 * E) / S;

    cout << "\n\tIlość winorośli jak zmieści sie w rzędzie: " << static_cast<int>(V) << endl;

    return 0;
}