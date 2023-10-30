// https://www.beecrowd.com.br/judge/en/problems/view/1366

#include <iostream>

using namespace std;

int main() {
    int n, c, v;
    int i, pares;

    cin >> n;
    
    while (n) {
        pares = 0;
        
        for (i = 0; i < n; i++) {
            cin >> c >> v;
            pares += v / 2;
        }
        cout << pares / 2 << endl;
        cin >> n;
    }
    return 0;
}
