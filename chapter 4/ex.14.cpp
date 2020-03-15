//
// Created by Marcin Luberda on 05/12/2019.
//

#include <iostream>

using namespace std;

int main(){

    double saldo, trans, cost_tr, cost1 = 0, cost = 0;

    cout << "\n\tPodaj saldo początkowe konta: ";
    cin >> saldo;
    cout << "\tPodaj liczbę transakcji: ";
    cin >> trans;

    if (saldo > 0 && saldo < 400)
        cost1 = cost + 15;
    else if (saldo >= 400)
        cost1 = cost;
    else
        cout << "\tMasz na koncie debet...\n";

    if (trans > 0 && trans < 20) {
        cost_tr = trans * 0.1;
        cost = cost1 + cost_tr;
        cout << "\tSuma opłat za miesiąc wynosi: " << cost << endl;
    } else if (trans >= 20 && trans < 40) {
        cost_tr = trans * 0.08;
        cost = cost1 + cost_tr;
        cout << "\tSuma opłat za miesiąc wynosi: " << cost << endl;
    } else if (trans >= 40 && trans < 60) {
        cost_tr = trans * 0.06;
        cost = cost1 + cost_tr;
        cout << "\tSuma opłat za miesiąc wynosi: " << cost << endl;
    } else if (trans >= 60) {
        cost_tr = trans * 0.04;
        cost = cost1 + cost_tr;
        cout << "\tSuma opłat za miesiąc wynosi: " << cost << endl;
    } else
        cout << "\tPodałeś ujemną liczbę przelewów.\n";

    return 0;
}