// https://www.beecrowd.com.br/judge/en/problems/view/1010

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int code1, numberUnits1, code2, numberUnits2;
    double price1, price2;
    double valueToPay;

    cin >> code1 >> numberUnits1 >> price1;
    cin >> code2 >> numberUnits2 >> price2;
    valueToPay = numberUnits1 * price1 + numberUnits2 * price2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valueToPay << endl;

    return 0;
}