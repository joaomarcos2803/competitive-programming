// https://www.beecrowd.com.br/judge/en/problems/view/1180

#include <iostream>

using namespace std;

int main() {
    int N, X, lowest = 10000000, position;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;
     
        if (X < lowest) {
            lowest = X;
            position = i;
        }
    }
    cout << "Menor valor: " << lowest << endl;
    cout << "Posicao: " << position << endl;
   
    return 0;
}