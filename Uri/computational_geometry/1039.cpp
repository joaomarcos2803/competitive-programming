// https://www.beecrowd.com.br/judge/en/problems/view/1039

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int R1, X1, Y1, R2, X2, Y2;

    while (cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2) {
        if(R1 >= (sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2))) + R2)
            cout << "RICO" << endl;
        else 
            cout << "MORTO" << endl;
    }
    return 0;
}
