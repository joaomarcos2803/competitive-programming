// https://www.beecrowd.com.br/judge/en/problems/view/1589

#include <iostream>

using namespace std;

int main() {
    int T;
    int r1, r2, rconduit;

    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> r1 >> r2;

        rconduit = r1 + r2;

        cout << rconduit << endl;
    }
    return 0;
}