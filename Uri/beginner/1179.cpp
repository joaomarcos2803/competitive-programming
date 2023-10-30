// https://www.beecrowd.com.br/judge/en/problems/view/1179

#include <iostream>

using namespace std;

int main() {
    int par[5], impar[5];
    int number, lenghtImpar = 0, lenghtPar = 0;
    int x = 0, y = 0, i, j;

    for (i = 0; i < 15; i++) {
        cin >> number;

        if (number % 2 == 0) {
            par[lenghtPar] = number;
            lenghtPar++;
        }
        else {
            impar[lenghtImpar] = number;
            lenghtImpar++;
        }

        if (lenghtImpar == 5) {
            for (j = 0; j < 5; j++) {
                cout << "impar[" << j << "] = " << impar[j] << endl;
            }
            lenghtImpar = 0;
        }
        if (lenghtPar == 5) {
            for (j = 0; j < 5; j++) {
                cout << "par[" << j << "] = " << par[j] << endl;;
            }
            lenghtPar = 0;
        }
    }
    for (i = 0; i < lenghtImpar; i++) {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    for (i = 0; i < lenghtPar; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
    }
   
    return 0;
}