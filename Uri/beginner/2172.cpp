// https://www.beecrowd.com.br/judge/en/problems/view/2172

#include <iostream>

using namespace std;

int main() {
    long long int M, E;
    int X;

    while (cin >> X >> M) {
        if (X == 0 && M == 0)
            break;

        E = X * M;
        cout << E << endl;
    }
    return 0;
}