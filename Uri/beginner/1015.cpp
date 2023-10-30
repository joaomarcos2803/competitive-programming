// https://www.beecrowd.com.br/judge/en/problems/view/1015

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x1, x2, y1, y2;
    double distance;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    distance = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
    cout << fixed << setprecision(4) << distance << endl;

    return 0;
}