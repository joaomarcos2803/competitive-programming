// https://www.beecrowd.com.br/judge/en/problems/view/1241

#include <iostream>

using namespace std;

int main() {
    int n, i, j, k;
    int count;
    string A, B;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> A >> B; 

        count = 0;
        for (j = A.length() - 1, k = B.length() - 1; k >= 0; k--, j--) {
            if (A[j] == B[k]) {
                count++;
            }
        }
        if (count == B.length()) {
            cout << "encaixa" << endl;
        }
        else {
            cout << "nao encaixa" << endl;
        }
    }
    return 0;
}
