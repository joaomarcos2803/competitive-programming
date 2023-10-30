// https://www.beecrowd.com.br/judge/en/problems/view/1963

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, ticketIncrease;

    cin >> A >> B;

    ticketIncrease = ((B - A) * 100 / A);

    cout << fixed << setprecision(2) << ticketIncrease << "%\n";

    return 0;
}