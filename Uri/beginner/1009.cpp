// https://www.beecrowd.com.br/judge/en/problems/view/1009

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char name[100];
    double salary, totalSales, totalSalary;
    cin >> name >> salary >> totalSales;
    totalSalary = salary + (totalSales * 15/100);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << totalSalary << endl;

    return 0;
}