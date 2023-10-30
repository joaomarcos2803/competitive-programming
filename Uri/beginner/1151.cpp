// https://www.beecrowd.com.br/judge/en/problems/view/1151

#include <iostream>

using namespace std;

int main() {
    int N, num1, num2, sum;

    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            num1 = 0;
            cout << num1;
        }
        else if (i == 2) {
            num2 = 1;
            cout << num2;
        }
        else {
            sum = num1 + num2;
            cout << sum;
            num1 = num2;
            num2 = sum;
        }
        if (i == N) 
            cout << endl;
        else
            cout << " ";
    }
    return 0;
}