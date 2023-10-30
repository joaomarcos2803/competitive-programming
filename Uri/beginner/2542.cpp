// https://www.beecrowd.com.br/judge/en/problems/view/2542

#include <iostream>

using namespace std;

int main() {
    int N, M, L, Cm, Cl, A;
    int i, j;

    while (cin >> N) {
        cin >> M >> L;

        int MDeck[M][N], LDeck[L][N];
    
        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                cin >> MDeck[i][j];
            }
        }

        for (i = 0; i < L; i++) {
            for (j = 0; j < N; j++) {
                cin >> LDeck[i][j];
            }
        }
        cin >> Cm >> Cl;  
        cin >> A;

        if (MDeck[Cm-1][A-1] > LDeck[Cl-1][A-1])
            cout << "Marcos\n";
        else if (MDeck[Cm-1][A-1] < LDeck[Cl-1][A-1])
            cout << "Leonardo\n";
        else
            cout << "Empate\n";
    }
    return 0;
}