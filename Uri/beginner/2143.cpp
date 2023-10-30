// https://www.beecrowd.com.br/judge/en/problems/view/2143

#include <iostream>

using namespace std;

int main() {
    int T, N;

    while (true) {
        cin >> T;

        if (T == 0) 
            break;
        
        for (int i = 0; i < T; i++) {
            cin >> N;

            if (N % 2 == 0)
                cout << N * 2 - 2 << endl;
            else
                cout << N * 2 - 1 << endl;           
        }
    }
    return 0;
}