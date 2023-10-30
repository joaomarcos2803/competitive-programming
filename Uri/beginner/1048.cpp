// https://www.beecrowd.com.br/judge/en/problems/view/1048

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salary, moneyEarned;
    int percentage;

    cin >> salary;

    if (salary >= 0 && salary <= 400) {
        percentage = 15;
        moneyEarned = (salary * percentage/100);
        salary += moneyEarned;
    }
    else if (salary > 400 && salary <= 800) {
        percentage = 12;
        moneyEarned = (salary * percentage/100);
        salary += moneyEarned;    
    }
    else if (salary > 800 && salary <= 1200) {
        percentage = 10;
        moneyEarned = (salary * percentage/100);
        salary += moneyEarned;    
    }
    else if (salary > 1200 && salary <= 2000) {
        percentage = 7;
        moneyEarned = (salary * percentage/100);
        salary += moneyEarned;    
    }
    else if (salary > 2000) {
        percentage = 4;
        moneyEarned = (salary * percentage/100);
        salary += moneyEarned;  
    }

    cout << "Novo salario: " << fixed << setprecision(2) << salary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << moneyEarned << endl;
    cout << "Em percentual: " << percentage << " %\n";

    return 0;
}