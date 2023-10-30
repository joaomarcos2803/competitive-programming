// https://www.beecrowd.com.br/judge/en/problems/view/2554

#include <iostream>

using namespace std;

int main() {
    int N, D, p, i, j;
    int count, count2, aux;
    string data, dataPizza;

    while (cin >> N >> D) {
        aux = 0;
        count2 = 0;
        for (i = 0; i < D; i++) {
            cin >> data;
    
            count = 0;
            for (j = 0; j < N; j++) {
                cin >> p;

                if (p == 1)
                    count++;
            }
            
            if (count == N) {
                if (aux == 0) {
                    dataPizza = data;
                    aux = 1;
                }
            }
            else
                count2++;   
        }

        if (count2 == D)
            cout << "Pizza antes de FdI\n";
        else
            cout << dataPizza << endl;
    }
    return 0;
}