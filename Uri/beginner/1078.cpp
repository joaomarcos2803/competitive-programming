// https://www.beecrowd.com.br/judge/en/problems/view/1078

#include <iostream>

using namespace std;

int main() {
    int N, X;
    
    cin >> N;

    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << N << " = " << N * i << endl;
    }
    return 0;
}