// https://www.beecrowd.com.br/judge/en/problems/view/1153

#include <iostream>

using namespace std;

int main() {
    int N, factorial = 1;

    cin >> N;

    for (int i = N; i > 0; i--) {
        factorial = factorial * i;
    }
    cout << factorial << endl;

    return 0;
}