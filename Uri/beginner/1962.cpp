// https://www.beecrowd.com.br/judge/en/problems/view/1962

#include <iostream>

using namespace std;

int main() {
    int N, T, year;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> T;

        if (T < 2015) {
            year = 2015 - T;
            cout << year << " D.C.\n";
        }
        else {
            year = T - 2014;
            cout << year << " A.C.\n";
        }
    }
    return 0;
}