// https://www.beecrowd.com.br/judge/en/problems/view/1045

#include <iostream>

using namespace std;

int main() {
    double A, B, C, aux;

    cin >> A >> B >> C;

    if (A < B) {
        aux = A;
        A = B;
        B = aux;
    }
    if (B < C) {
        aux = B;
        B = C;
        C = aux;
    }
    if (A < B) {
        aux = A;
        A = B;
        B = aux;
    }

    if (A >= B + C)
        cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if (A*A == ((B*B) + (C*C)))
            cout << "TRIANGULO RETANGULO" << endl;
        if (A*A > ((B*B) + (C*C)))
            cout << "TRIANGULO OBTUSANGULO" << endl;
        if (A*A < ((B*B) + (C*C)))
            cout << "TRIANGULO ACUTANGULO" << endl;
        if (A == B && B == C)
            cout << "TRIANGULO EQUILATERO" << endl;
        if (A == B && A != C || B == C && B != A || C == A && C != B)
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}