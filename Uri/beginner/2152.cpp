// https://www.beecrowd.com.br/judge/en/problems/view/2152

#include <iostream>

using namespace std;

int main() {
    int N, H, M, O;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> H >> M >> O;

        if (H < 10)
            cout << "0" << H;
        else 
            cout << H;
        
        cout << ":";

        if (M < 10)
            cout << "0" << M;
        else 
            cout << M;
        
        if (O == 0) 
            cout << " - A porta fechou!\n";
        else if (O == 1)
            cout << " - A porta abriu!\n";
    }

    return 0;
}