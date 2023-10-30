// https://www.beecrowd.com.br/judge/en/problems/view/1175

#include <iostream>

using namespace std;

int main() {
    int N[100], i, j, aux;

    for (i = 0; i < 20; i++) {
        cin >> N[i];
    }

    for (i = 0, j = 19; i < 10; i++, j--) {
        aux = N[i];
        N[i] = N[j];
        N[j] = aux;
    }

    for (i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}