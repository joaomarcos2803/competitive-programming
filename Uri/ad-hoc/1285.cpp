// https://www.beecrowd.com.br/judge/en/problems/view/1285

#include <iostream>

using namespace std;

int main() {
    int N, M, i, j, k;
    int number[4], digits, aux;
    int count, repeatedDigit;

    while (cin >> N >> M) {
        count = 0;
        for (i = N; i <= M; i++) {
            digits = 0;
            repeatedDigit = 0;
            aux = i;
            while (aux != 0){
                number[digits] = aux % 10;
                aux /= 10;
                digits++;
            }
            for(j = 0; j < digits; j++){
                for(k = j+1; k < digits; k++){
                    if(number[j] == number[k]){
                        repeatedDigit = 1;
                    }
                }
            }
            if (repeatedDigit == 0) 
                count++;
        }
        cout << count << endl;        
    }
    return 0;
}