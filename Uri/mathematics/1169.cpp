// https://www.beecrowd.com.br/judge/en/problems/view/1169

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, i, x;
    unsigned long long int totalGrains, wheat;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> x;
        
        if (x == 64) {
            cout << "1537228672809129 kg" << endl;
        }
        else {
            totalGrains = pow(2, x);
            wheat = totalGrains / 12; // 12 gramas do cereal correspondem a 1 grama
            wheat = wheat / 1000; //conversão para kgs
            cout << wheat << " kg" << endl;
        }
    }
    return 0;
}