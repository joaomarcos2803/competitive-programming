// https://www.beecrowd.com.br/judge/en/problems/view/1002

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, R, pi = 3.14159;

    cin >> R;
    A = pi * (R * R);
    cout << "A=" << fixed << setprecision(4) << A << "\n";

    return 0;
}