// https://www.beecrowd.com.br/judge/en/problems/view/2770

#include <iostream>

using namespace std;

int main() {
    long int X, Y, M;
    long int dimensionX, dimensionY;

    while (cin >> X >> Y >> M) {
        for (int i = 0; i < M; i++) {
            cin >> dimensionX >> dimensionY;

            if (dimensionX <= X && dimensionY <= Y || dimensionX <= Y && dimensionY <= X)
                cout << "Sim\n";
            else
                cout << "Nao\n";                
        }
    }
    return 0;
}