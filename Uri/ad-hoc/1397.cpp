// https://www.beecrowd.com.br/judge/en/problems/view/1397

#include <iostream>

using namespace std;

int main() {
    int n, A, B, i;
    int scoreA, scoreB;

    cin >> n;
    
    while (n) {   
        scoreA = 0, scoreB = 0;
        for (i = 0; i < n; i++) {
            cin >> A >> B;
            if (A > B) 
                scoreA++;
            if (B > A)
                scoreB++;
        }
        cout << scoreA << " " << scoreB << endl;
        cin >> n;
    }
    return 0;
}