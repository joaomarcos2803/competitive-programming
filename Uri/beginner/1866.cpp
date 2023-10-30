// https://www.beecrowd.com.br/judge/en/problems/view/1866

#include <iostream>

using namespace std;

int main() {
    int C, N, i;

    cin >> C;

    for (i = 0; i < C; i++) {
        cin >> N;

        if (N % 2 == 0) {
            cout << "0" << endl;
        }
        else {
            cout << "1" << endl;
        }
    }
    return 0;
}