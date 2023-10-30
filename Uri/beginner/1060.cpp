// https://www.beecrowd.com.br/judge/en/problems/view/1060

#include <iostream>

using namespace std;

int main() {
    double number, positiveNumbers = 0;

    for (int i = 1; i <= 6; i++) {
        cin >> number;

        if (number > 0)
            positiveNumbers++;
    }
    cout << positiveNumbers << " valores positivos\n";

    return 0;
}