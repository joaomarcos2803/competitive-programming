// https://www.beecrowd.com.br/judge/en/problems/view/1099

#include <iostream>

using namespace std;

int main() {
    int N, X, Y, sum;
    int min, max;

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> X >> Y;

        if (X == Y) {
            min = X - 1;
            max = Y;
        }
        else if (X < Y) {
            min = X;
            max = Y;
        }
        else if (X > Y) {
            min = Y;
            max = X;
        }
        sum = 0;
        for (int j = min + 1; j < max; j++) {
            if (j % 2 != 0) {
                sum += j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}