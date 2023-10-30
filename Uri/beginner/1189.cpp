// https://www.beecrowd.com.br/judge/en/problems/view/1189

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, j;
    char O[1];
    double M[12][12], average, sum = 0;
    int point1 = 0, point2 = 4;

    cin >> O[0];

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    for (i = 1; i < 11; i++) {
        if (i <= 5) {
            for (j = 0; j <= point1; j++) {
                sum += M[i][j];
            }
            point1++;
        }
        else if (i >= 6) {
            for (j = 0; j <= point2; j++) {
                sum += M[i][j];
            }
            point2--;
        }
    }
    if (O[0] == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (O[0] == 'M') {
       average = sum / 30;
        cout << fixed << setprecision(1) << average << endl;
    }
    return 0;
}