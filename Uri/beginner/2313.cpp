// https://www.beecrowd.com.br/judge/en/problems/view/2313

#include <iostream>

using namespace std;

int main() {
    long long int A, B, C;

    cin >> A >> B >> C;

    if (A + C > B) {
        if (A == B && B == C)
            cout << "Valido-Equilatero\n";
        else if (A != B && B != C && A != C)
            cout << "Valido-Escaleno\n";
        else
            cout << "Valido-Isoceles\n";

        if (A * A == (B * B + C * C) || B * B == (A * A + C * C) || C * C == (A * A + B * B))
            cout << "Retangulo: S\n";
        else
            cout << "Retangulo: N\n";
    }
    else 
        cout << "Invalido\n";

    return 0;
}