// https://www.beecrowd.com.br/judge/en/problems/view/1071

#include <iostream>

using namespace std;

int main() {
    int X, Y, min, max, sum = 0;
    
    cin >> X >> Y;

    if (X < Y) {
        min = X;
        max = Y;
    }
    else {
        min = Y;
        max = X;
    }

    for (int i = min + 1; i < max; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    
    return 0;
}