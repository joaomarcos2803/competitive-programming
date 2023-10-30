// https://www.beecrowd.com.br/judge/en/problems/view/1858

#include <iostream>

using namespace std;

int main() {
    int n, T, i;
    int min = 21, count;

    cin >> n;

    for (i = 1; i <= n; i++) {
        cin >> T;

        if (T < min) {
            min = T;
            count = i;
        }
    }
    cout << count << endl;

    return 0;
}