//
// Created by Marcin Luberda on 08/11/2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const double STOCK_BUY = 45.40;
    const double STOCK_SALE = 56.90;
    const int STOCK_AMOUNT = 1000;

    cout << setprecision(2) << fixed;
    cout << "\n\tKoszt zakupu akcji:           " << STOCK_BUY * STOCK_AMOUNT << endl;
    cout << "\tProwizja od zakupu akcji:     " << (STOCK_BUY * STOCK_AMOUNT) * 0.02 << endl;
    cout << "\tZysk ze sprzedaży akcji:      " << (STOCK_SALE * STOCK_AMOUNT) << endl;
    cout << "\tProwizja od sprzedaży akcji:  " << (STOCK_SALE * STOCK_AMOUNT) * 0.02 << endl;

    double profit = STOCK_SALE * STOCK_AMOUNT - ((STOCK_BUY * STOCK_AMOUNT + ((STOCK_BUY * STOCK_AMOUNT) * 0.02) + ((STOCK_SALE * STOCK_AMOUNT) * 0.02)));

    cout << "\n\tZYSK Z TRANSAKCJI:            " << profit << endl;

    return 0;
}