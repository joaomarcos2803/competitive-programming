// https://www.beecrowd.com.br/judge/en/problems/view/1030

#include <iostream>

using namespace std;

int remaining(int n, int k) {
    int i, sum = 0;

    for (i = 2; i <= n; i++)
        sum = (sum + k) % i;

    return sum + 1;
}

int main() {
    int NC, n, k;
    int i, count = 0;

    cin >> NC;

    for (i = 1; i <= NC; i++) {
        cin >> n >> k;
        cout << "Case " << i << ": " << remaining(n, k) << endl;
    }
    return 0;
}