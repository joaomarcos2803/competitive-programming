// https://www.beecrowd.com.br/judge/en/problems/view/1159

#include <iostream>

using namespace std;

int main() {
    int X, sum;
    
    while (true) {
        cin >> X;

        if (X == 0)
            break;

        if (X % 2 != 0) {
            X++;
        }

        sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += X;
            X += 2;
        }
        cout << sum << endl; 
    }
    return 0;
}