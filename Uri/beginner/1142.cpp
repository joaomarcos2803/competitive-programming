// https://www.beecrowd.com.br/judge/en/problems/view/1142

#include <iostream>

using namespace std;

int main() {
    int n, i, j, k = 1;

    cin >> n;

    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            cout << j + k << " ";
        }
        cout << "PUM" << endl;
        k += 4;
    }
    return 0;
}
