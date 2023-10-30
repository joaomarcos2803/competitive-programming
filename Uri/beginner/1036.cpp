// https://www.beecrowd.com.br/judge/en/problems/view/1036

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double A, B, C, delta, x1, x2;
        
    cin >> A >> B >> C;
    
    delta = (B * B) - 4 * A * C;

    if (delta < 0 || A == 0)
        cout << "Impossivel calcular\n";
    else {
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
        cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
    }
    return 0;
}