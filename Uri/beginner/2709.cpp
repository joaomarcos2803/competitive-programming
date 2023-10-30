// https://www.beecrowd.com.br/judge/en/problems/view/2709

#include <iostream>

using namespace std;

int main() {
    int M, N, sum;
    int prime, i, j;

    while (cin >> M) {
        int V[M];
        for (int i = 0; i < M; i++) {
            cin >> V[i];
        }
        cin >> N;
        
        j = M - 1;
        sum = 0;
        while (j >= 0) {
            sum += V[j];
            j -= N;
        }

        prime = 1;
        for (int j = 2; j < sum; j++) {
            if (sum % j == 0) {
                prime = 0;
            }
        }

        if (sum == 1)
            prime = 0;

        if (prime == 1) 
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.\n";
        else
            cout << "Bad boy! I’ll hit you.\n";
    }
    return 0;
}