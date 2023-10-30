// https://www.beecrowd.com.br/judge/en/problems/view/1318

#include <iostream>

using namespace std;

int main() {
    int n, m, number;
    int count, i;

    cin >> n >> m;

    while(n || m) {
        int ticket[10001] = {0};
        for (i = 0; i < m; i++) {
            cin >> number;
            ticket[number]++;
        }
        count = 0;
        for (i = 1; i <= 10000; i++) {
            if (ticket[i] > 1) {
                count++;
            }
        }
        cout << count << endl;

        cin >> n >> m;
    }
    return 0;
}