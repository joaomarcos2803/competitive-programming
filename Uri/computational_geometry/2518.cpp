// https://www.beecrowd.com.br/judge/en/problems/view/2518

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int n, h, c, l;
    double area1, totalArea;

    while (cin >> n) {
        cin >> h >> c >> l;

        area1 = sqrt(double(pow(h, 2)) + double(pow(c, 2)));
        totalArea = double (area1 * l * n) / 10000; //divisão por 10000 para converter para metros quadrados

        cout << fixed << setprecision(4) << totalArea << endl;
    }

    return 0;
}