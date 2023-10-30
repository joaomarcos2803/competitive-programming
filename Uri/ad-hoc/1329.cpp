// https://www.beecrowd.com.br/judge/en/problems/view/1329

#include <iostream>

using namespace std;

int main() {
    int n, r, i;
    int maryWins, johnWins;
    cin >> n;
    
    while (n) {
        maryWins = 0, johnWins = 0;
        for (i = 0; i < n; i++) {
            cin >> r;

            if (r == 0)
                maryWins++;
            if (r == 1)
                johnWins++;
        }
        cout << "Mary won " << maryWins << " times and John won " << johnWins << " times\n";
        cin >> n;
    }
    return 0;
}