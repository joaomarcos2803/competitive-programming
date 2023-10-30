// https://www.beecrowd.com.br/judge/en/problems/view/1929

#include <iostream>

using namespace std;

int main() {
    int A, B, C, D, aux;

    cin >> A >> B >> C >> D;

    if (A < B) {
        aux = A;
        A = B;
        B = aux;
    }
    if (A < C) {
        aux = A;
        A = C;
        C = aux;
    }
    if (A < D) {
        aux = A;
        A = D;
        D = aux;
    }
    if (B < C) {
        aux = B;
        B = C;
        C = aux;
    }
    if (B < D) {
        aux = B;
        B = D;
        D = aux;
    }
    if (C < D) {
        aux = C;
        C = D;
        D = aux;
    }
    if (A < B + C || B < C + D)
        cout << "S\n";
    else
        cout << "N\n";
    
    return 0;
}