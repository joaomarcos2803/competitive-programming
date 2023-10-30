// https://www.beecrowd.com.br/judge/en/problems/view/1079

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    double number1, number2, number3;
    double average;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> number1 >> number2 >> number3;

        average =  (number1 * 2 + number2 * 3 + number3 * 5) / 10;
        cout << fixed << setprecision(1) << average << endl; 
    }
    
    return 0;
}