// https://www.beecrowd.com.br/judge/en/problems/view/1187

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, j;
    char O[1];
    double M[12][12], average, sum = 0;
    
    cin >> O[0];

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 11 - i; j++) {
            sum += M[i][j];
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