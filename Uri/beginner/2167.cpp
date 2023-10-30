// https://www.beecrowd.com.br/judge/en/problems/view/2167

#include <iostream>

using namespace std;

int main() {
    int N;
    int measureIndex = 0;

    cin >> N;

    int R[N];

    for (int i = 1; i <= N; i++) {
        cin >> R[i];

        if (R[i] < R[i-1]) {
            measureIndex = i;
            break;
        }
    }
    cout << measureIndex << endl;

    return 0;
}