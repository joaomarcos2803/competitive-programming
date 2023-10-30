// https://www.beecrowd.com.br/judge/en/problems/view/1133

#include <iostream>

using namespace std;

int main() {
    int X, Y, min, max;

    cin >> X >> Y;

    if (X == Y) {
        min = X - 1;
        max = Y;
    }
    else if (X < Y) {
        min = X;
        max = Y;
    }
    else {
        min = Y;
        max = X;
    }
    for (int i = min+1; i < max; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }
    return 0;
}