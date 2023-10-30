// https://www.beecrowd.com.br/judge/en/problems/view/2161

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double N, squareRoot10 = 0;

    cin >> N;

    while (N--) {
        squareRoot10 += 6.0;
        squareRoot10 = 1.0 / squareRoot10;
    }
    squareRoot10 += 3.0;

    cout << fixed << setprecision(10) << squareRoot10 << endl;

    return 0;
}