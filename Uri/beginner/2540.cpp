// https://www.beecrowd.com.br/judge/en/problems/view/2540

#include <iostream>

using namespace std;

int main() {
    int N, v, count;

    while (cin >> N) {
        count = 0;
        for (int i = 0; i < N; i++) {
            cin >> v;

            if (v == 1)
                count++;
        }
        if (count >= (double)(2 * N) / double(3)) {
            cout << "impeachment\n";
        }
        else
            cout << "acusacao arquivada\n";
    }

    return 0;
}