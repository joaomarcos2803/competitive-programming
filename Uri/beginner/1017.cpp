// https://www.beecrowd.com.br/judge/en/problems/view/1017

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int time, averageSpeed, distance;
    double liters;

    cin >> time >> averageSpeed;
    distance = time * averageSpeed;
    liters = distance / 12.0; //the car does 12 Km/L
    cout << fixed << setprecision(3) << liters << endl;

    return 0;
}