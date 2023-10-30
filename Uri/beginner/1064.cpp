// https://www.beecrowd.com.br/judge/en/problems/view/1064

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int positiveValues = 0;
    double number, total = 0, average;

    for (int i = 0; i < 6; i++) {
        cin >> number;

        if (number > 0) {
            positiveValues++;
            total += number;
        }
    }
    average = total / positiveValues;

    cout << positiveValues << " valores positivos\n";
    cout << fixed << setprecision(1) << average << endl;
    
    return 0;
}