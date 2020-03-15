//
// Created by Marcin Luberda on 09/12/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double m, h, hour, time, cost=0;

    cout << "\n\tPodaj godzinę rozpoczęcia rozmowy (format gg.mm): ";
    cin >> hour;
    cout << "\tPodaj czas rozmowy (w min.): ";
    cin >> time;

    h = static_cast<int>(hour);
    m = hour - static_cast<int>(hour);

    if (h <= 23 && m <= .59) {
        if(hour >= 00.00 && hour <= 06.59){
            cost = time * 0.05;
            cout << "\tKoszt rozmowy wynosi: " << setprecision(2) << fixed << cost << " €\n";
        } else if (hour >= 07.00 && hour <= 19.00){
            cost = time * 0.45;
            cout << "\tKoszt rozmowy wynosi: " << setprecision(2) << fixed << cost << " €\n";
        } else if (hour >= 19.01 && hour <= 23.59){
            cost = time * 0.2;
            cout << "\tKoszt rozmowy wynosi: " << setprecision(2) << fixed << cost << " €\n";
        }
    } else
        cout << "\tNieprawidłowy zakres podanych godzin.\n";

    return 0;
}
