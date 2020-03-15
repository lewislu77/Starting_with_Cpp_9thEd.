//
// Created by Marcin Luberda on 02/12/2019.
//

#include <iostream>

using namespace std;

int main(){

    double box, price = 99, sum;

    cout << "\n\tPodaj liczbę zakupionych pakietów: ";
    cin >> box;

    if (10 <= box && box < 20){
        sum = ((box * price) - ((box * price) * 0.2));
        cout << "\tKoszt zakupu wynosi: " << sum << " zł.\n";
    } else if (20 <= box && box < 50){
        sum = ((box * price) - ((box * price) * 0.3));
        cout << "\tKoszt zakupu wynosi: " << sum << " zł.\n";
    } else if (50 <= box && box < 100){
        sum = ((box * price) - ((box * price) * 0.4));
        cout << "\tKoszt zakupu wynosi: " << sum << " zł.\n";
    } else if (box >= 100){
        sum = (box * price) * 0.5;
        cout << "\tKoszt zakupu wynosi: " << sum << " zł.\n";
    } else{
        sum = box * price;
        cout << "\tKoszt zakupu wynosi: " << sum << " zł.\n";
    }

    return 0;
}