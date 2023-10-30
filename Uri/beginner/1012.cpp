// https://www.beecrowd.com.br/judge/en/problems/view/1012

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C, pi = 3.14159;
    double triangleArea, circleArea, trapeziumArea, squareArea, rectangleArea;

    cin >> A >> B >> C;
    triangleArea = A * C / 2;
    circleArea = pi * C * C;
    trapeziumArea = (A + B) * C / 2;
    squareArea = B * B;
    rectangleArea = A * B;
    cout << "TRIANGULO: " << fixed << setprecision(3) << triangleArea << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circleArea << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapeziumArea << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << squareArea << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rectangleArea << endl;

    return 0;
}