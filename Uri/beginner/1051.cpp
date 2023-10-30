// https://www.beecrowd.com.br/judge/en/problems/view/1051

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salary, taxes;

    cin >> salary;

    if (salary <= 2000)
        cout << "Isento\n";
    else if (salary > 2000 && salary <= 3000) {
        taxes = (salary - 2000) * 0.08;
        cout << "R$ " << fixed << setprecision(2) << taxes << endl;
    }
    else if (salary > 3000 && salary <= 4500) {
        taxes = ((salary - 3000) * 0.18 + 1000 * 0.08);
        cout << "R$ " << fixed << setprecision(2) << taxes << endl;
    }
    else if (salary > 4500) {
        taxes = ((salary - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08);
        cout << "R$ " << fixed << setprecision(2) << taxes << endl;
    }
    return 0;
}