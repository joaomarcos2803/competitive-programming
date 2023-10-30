// https://www.beecrowd.com.br/judge/en/problems/view/1091

#include <iostream>

using namespace std;

int main() {
    int k, n, m;
    int i, x, y;

    cin >> k;

    while (k) {
        cin >> n >> m;
        for (i = 0; i < k; i++) {
            cin >> x >> y;

            if (x == n || y == m)
                cout << "divisa\n";
            else if (x > n && y > m)
                cout << "NE\n";
            else if (x < n && y > m)
                cout << "NO\n";
            else if (x < n && y < m)
                cout << "SO\n";
            else if (x > n && y < m)
                cout << "SE\n";
        }
        cin >> k;
    }
    return 0;
}