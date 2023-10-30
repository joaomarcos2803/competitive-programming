// https://www.beecrowd.com.br/judge/en/problems/view/1043

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;
    double perimetro, area;

    cin >> A >> B >> C;

    if ((A + B) > C && (B + C) > A && (A + C) > B) {
        perimetro = A + B + C;
        cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
    }
    else {
        area = ((A + B) * C) / 2;
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }
    return 0;
}