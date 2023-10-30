// https://www.beecrowd.com.br/judge/en/problems/view/1011

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double volume, R, pi = 3.14159;

    cin >> R;
    volume = (4/3.0) * pi * R * R * R;
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}