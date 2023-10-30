// https://www.beecrowd.com.br/judge/en/problems/view/2551

#include <iostream>

using namespace std;

int main() {
    int N, i;
    double T, D, averageSpeed, record;

    while (cin >> N) { 
        record = 0;   
        for (i = 1; i <= N; i++){
            cin >> T >> D;
            averageSpeed = D / T;

            if (averageSpeed > record) {
                record = averageSpeed;
                cout << i << endl;
            }
        }
    }
    return 0;
}