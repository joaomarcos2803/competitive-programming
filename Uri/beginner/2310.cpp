// https://www.beecrowd.com.br/judge/en/problems/view/2310

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, S, B, A, S1, B1, A1, totalS = 0, totalB = 0, totalA = 0;
    double sucessfullS = 0, sucessfullB = 0, sucessfullA = 0;
    string name;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> name;
        cin >> S >> B >> A;
        cin >> S1 >> B1 >> A1;

        totalS += S;
        totalB += B;
        totalA += A;
        sucessfullS += S1;
        sucessfullB += B1;
        sucessfullA += A1;
    }
    cout << "Pontos de Saque: " << fixed << setprecision(2) << (sucessfullS / totalS) * 100 << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (sucessfullB / totalB) * 100 << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << (sucessfullA / totalA) * 100 << " %." << endl;

    return 0;
}