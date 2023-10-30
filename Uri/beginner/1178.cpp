// https://www.beecrowd.com.br/judge/en/problems/view/1178

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double X, N[100];
    int i;

    cin >> X;
    N[0] = X;

    for (i = 1; i < 100; i++) {
        N[i] = N[i-1] / 2;
    }

    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
    }
    
    return 0;
}