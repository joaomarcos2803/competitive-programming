// https://www.beecrowd.com.br/judge/en/problems/view/2867

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, m, c, i;
    int digits;

    cin >> c;

    for (i = 0; i < c; i++) {
        cin >> n >> m;

        digits = (floor(log10(pow(n, m)))) + 1;

        cout << digits << endl;
    }
    return 0;
}