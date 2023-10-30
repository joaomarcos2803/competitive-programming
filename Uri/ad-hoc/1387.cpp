// https://www.beecrowd.com.br/judge/en/problems/view/1387

#include <iostream>

using namespace std;

int main() {
    int L, R;

    cin >> L >> R;

    while (L || R) {
        cout << L + R << endl;
        cin >> L >> R;
    }
    return 0;
}