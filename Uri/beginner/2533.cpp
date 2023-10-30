// https://www.beecrowd.com.br/judge/en/problems/view/2533

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int M, N, C;
    double numerador, denominador, API = 0;

    while (cin >> M) {
        numerador = 0;
        denominador = 0;
        for (int i = 0; i < M; i++) {
            cin >> N >> C;

            numerador += (N * C);
            denominador += C;
        }
        API = numerador / (denominador * 100);
        cout << fixed << setprecision(4) << API << endl;
    }
    return 0;
}