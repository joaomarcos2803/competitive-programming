// https://www.beecrowd.com.br/judge/en/problems/view/1149

#include <iostream>

using namespace std;

int main() {
    int A, N, sum = 0;

    cin >> A >> N;

    while (N <= 0) {
        cin >> N;
    }

    for (int i = A; i < N + A; i++) {
        sum += i;
    }

    cout << sum << endl;
    
    return 0;
}