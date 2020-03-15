//
// Created by Marcin Luberda on 08/12/2019.
//

#include <iostream>

using namespace std;

int main(){

    double temp=0;

    cout << "\n\tPodaj temperature: ";
    cin >> temp;

    if (temp <= -114)
        cout << "\n\tAlkohol etylowy zamarza";
    else if (temp >= 78)
        cout << "\n\tAlkohol etylowy wrze";

    if (temp <= -39)
        cout << "\n\tRtęć zamarza";
    else if (temp >= 357)
        cout << "\n\tRtęć wrze";

    if (temp <= -218)
        cout << "\n\tTlen zamarza";
    else if (temp >= -163)
        cout << "\n\tTlen wrze";

    if (temp <= 0)
        cout << "\n\tWoda zamarza";
    else if (temp >= 100)
        cout << "\n\tWoda wrze";

    return 0;
}