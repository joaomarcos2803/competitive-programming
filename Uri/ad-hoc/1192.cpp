// https://www.beecrowd.com.br/judge/en/problems/view/1192

#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    int firstDigit, secondDigit, n, i, answer;
    char letter;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> firstDigit >> letter >> secondDigit;

        if (firstDigit == secondDigit) {
            answer = firstDigit * secondDigit;
        }
        else if (isupper(letter)) {
            answer = secondDigit - firstDigit;
        }
        else  {
            answer = firstDigit + secondDigit;
        }
        cout << answer << endl;
    }
    return 0;
}