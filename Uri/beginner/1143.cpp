// https://www.beecrowd.com.br/judge/en/problems/view/1143

#include <iostream>

using namespace std;

int main() {
    int N, x = 1;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << x << " " << x * x << " " << x * x * x << endl;
        x++;
    }
    return 0;
}