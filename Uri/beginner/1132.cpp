// https://www.beecrowd.com.br/judge/en/problems/view/1132

#include <iostream>

using namespace std;

int main() {
    int X, Y, min, max;
    int sum = 0;

    cin >> X >> Y;

    if (X < Y) {
        min = X;
        max = Y;
    }
    else {
        min = Y;
        max = X;
    }
    for (int i = min; i <= max; i++) {
        if (i % 13 != 0) {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}