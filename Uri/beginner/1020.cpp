// https://www.beecrowd.com.br/judge/en/problems/view/1020

#include <iostream>

using namespace std;

int main() {
    int days, years, months;

    cin >> days;
    years = days / 365;
    months = days % 365 / 30;
    days = days % 365 % 30;
    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}