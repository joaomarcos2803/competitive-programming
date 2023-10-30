// https://www.beecrowd.com.br/judge/en/problems/view/1014

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int X;
    double Y, averageConsumption;

    cin >> X >> Y;
    averageConsumption = X / Y;
    cout << fixed << setprecision(3) << averageConsumption << " km/l" << endl;

    return 0;
}