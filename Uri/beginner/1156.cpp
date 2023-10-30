// https://www.beecrowd.com.br/judge/en/problems/view/1156

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double S = 1;

    for (double i = 3, j = 2; i <= 39; i += 2, j *= 2) {
        S += i / j; 
    }
    cout << fixed << setprecision(2) << S << endl;
    
    return 0;
}