// https://www.beecrowd.com.br/judge/en/problems/view/1103

#include <iostream>

using namespace std;

int main() {
    int h1, m1, h2, m2;
    int sleepMinutes;
    int x, y;

    cin >> h1 >> m1 >> h2 >> m2;

    while (h1 || m1 || h2 || m2) {
        x = h1 * 60 + m1;
        y = h2 * 60 + m2;

        if (y <= x)
            y += 24 * 60;

        sleepMinutes = (y - x);

        cout << sleepMinutes << endl;
        cin >> h1 >> m1 >> h2 >> m2;
    }
    return 0;
}