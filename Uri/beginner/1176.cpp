// https://www.beecrowd.com.br/judge/en/problems/view/1176

#include <iostream>

using namespace std;

int main() {
    long long int T, N, first, second, next;
    int i, j;
    
    cin >> T;

    for (i = 0; i < T; i++) {
        cin >> N;

        first = 0;
        second = 1;
        for (j = 0; j <= N; j++) {
            if (j <= 1) {
                next = j;
            }
            else {
                next = first + second;
                first = second;
                second = next;
            }
        }
        cout << "Fib(" << N << ") = " << next << endl;
    }
    return 0;
}