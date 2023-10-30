// https://www.beecrowd.com.br/judge/en/problems/view/2234

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int M, P;
    double average;

    cin >> M >> P;

    average = (double) M / (double) P;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}