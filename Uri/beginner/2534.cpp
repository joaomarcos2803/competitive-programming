// https://www.beecrowd.com.br/judge/en/problems/view/2534

#include <iostream>
#include <algorithm>

using namespace std;

bool compare (int a, int b) {
    return a > b;
}

int main() {
    int N, Q, i;

    while (cin >> N >> Q) {

        int n[N], p;

        for (i = 0; i < N; i++) {
            cin >> n[i];
        }

        sort(n, n + N, compare);

        for (i = 0; i < Q; i++) {
            cin >> p;

            cout << n[p-1] << endl;
        }
    }
    return 0;
}