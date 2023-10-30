// https://www.beecrowd.com.br/judge/en/problems/view/1168

#include <iostream>
#include <string.h>

using namespace std;

int led(int n) {
    if (n == 0)
        return 6;
    else if (n == 1)
        return 2;
    else if (n == 2)
        return 5;
    else if (n == 3)
        return 5;
    else if (n == 4)
        return 4;
    else if (n == 5)
        return 5;
    else if (n == 6)
        return 6;
    else if (n == 7)
        return 3;
    else if (n == 8) 
        return 7;
    else if (n == 9)
        return 6;
}

int main() {
    int n, i, j;
    int totalLeds;
    char s[110];

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> s;

        totalLeds = 0;
        for (j = 0; j < strlen(s); j++) {
            totalLeds += led(s[j] - '0');
        }
        cout << totalLeds << " leds\n";
    }
    return 0;
}