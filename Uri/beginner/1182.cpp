// https://www.beecrowd.com.br/judge/en/problems/view/1182

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int L, i, j;
    char T[1];
    double M[12][12], average, sum = 0;

    cin >> L >> T[0];

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];

            if (j == L) {
                sum += M[i][j];
            }
        }
    }
    if (T[0] == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    }
   else if (T[0] == 'M') {
       average = sum / 12;
        cout << fixed << setprecision(1) << average << endl;
   }
    return 0;
}