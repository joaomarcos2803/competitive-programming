// https://www.beecrowd.com.br/judge/en/problems/view/1165

#include <iostream>

using namespace std;

int main() {
    int N, i, j;
    long int X;
    int count;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> X;

        count = 0;
        for (j = 2; j < X; j++) {
            if (X % j == 0)
                count++;
        }
        if (count != 0)
            cout << X << " nao eh primo\n";
        else
            cout << X << " eh primo\n";
    }
    return 0;
}