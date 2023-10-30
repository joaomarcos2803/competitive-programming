// https://www.beecrowd.com.br/judge/en/problems/view/1266

#include <iostream>

using namespace std;

int main() {
    int n, numero, zero, soma, inicio, postes;
    
    cin >> n;

    while(n) {
        zero = 0;
        soma = 0;
        inicio = 0;
        postes = 0;

        for(int i = 0; i < n; i++){
            cin >> numero;
            if(numero == 0 && inicio == 0) {
                zero++;
                postes++;
            }
            else if(numero == 0 && inicio == 1) {
                postes++;
            }
            if(numero == 1) {
                inicio = 1;
                soma += postes/2;
                postes = 0;
            }
        }
        if(postes > 0) {
            soma -= zero/2;
            postes += zero;
            soma += postes/2;
        }
        cout << soma << endl;
        cin >> n;
    }
    return 0;
}
