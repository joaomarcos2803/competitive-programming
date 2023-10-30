// https://www.beecrowd.com.br/judge/en/problems/view/1188

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, j;
    char O[1];
    double M[12][12], average, sum = 0;
    int point = 5;

    cin >> O[0];

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    for (i = 7; i < 12; i++) {
        for (j = point; j < i; j++) {
            sum += M[i][j];
        }
        point--;
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