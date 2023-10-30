// https://www.beecrowd.com.br/judge/en/problems/view/1158

#include <iostream>

using namespace std;

int main() {
    int N, X, Y;
    int sum, j, count;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X >> Y;
        
        sum = 0;
        count = 0;
        j = X;
        while (count < Y) {
            if (j % 2 != 0) {
                sum += j;
                count++;
            }
            j++;
        }
        cout << sum << endl;
    }
    return 0;
}