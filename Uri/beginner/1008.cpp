// https://www.beecrowd.com.br/judge/en/problems/view/1008

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number, workedHours;
    float amountPerHour, salary;

    cin >> number >> workedHours >> amountPerHour;
    salary = workedHours * amountPerHour;
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}