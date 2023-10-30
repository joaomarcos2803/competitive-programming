// https://www.beecrowd.com.br/judge/en/problems/view/1177

#include <iostream>

using namespace std;

int main() {
    int T, N[1000];
    int i, j;
    
    cin >> T;

    for (i = 0, j = 0; i < 1000; i++) {
        N[i] = j;
        j++;

        if (j == T) {
            j = 0;
        }
    }

    for (int i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}