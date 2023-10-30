// https://www.beecrowd.com.br/judge/en/problems/view/1087

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    int answer;

    cin >> x1 >> y1 >> x2 >> y2;

    while(x1 || y1 || x2 || y2) {
        //mesma posicao
        if (x1 == x2 && y1 == y2) {
            answer = 0;
        }
        //mesma linha ou coluna
        else if (x1 == x2 || y1 == y2) {
            answer = 1;
        }
        //mesma diagonal
        else if(fabs(x2 - x1) == fabs(y2 - y1)) {
            answer = 1;
        }
        //todas as outras posições precisam de 2 movimentos
        else {
            answer = 2;
        }
        cout << answer << endl;

        cin >> x1 >> y1 >> x2 >> y2;
    }
    return 0;
}