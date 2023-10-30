// https://www.beecrowd.com.br/judge/en/problems/view/1101

#include <iostream>

using namespace std;

int main() {
    int M, N, min, max;
    int sum;

    while (true) {
        cin >> M >> N;

        if (M <= 0 || N <= 0)
            break;
        
        if (M < N) {
            min = M;
            max = N;
        }
        else {
            min = N;
            max = M;
        }
        sum = 0;
        for (int i = min; i <= max; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }
    return 0;
}