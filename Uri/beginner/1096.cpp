// https://www.beecrowd.com.br/judge/en/problems/view/1096

#include <iostream>

using namespace std;

int main() {
    int i, j;

    for (int i = 1, j = 7; i <= 9; j--) {
        cout << "I=" << i << " J=" << j << endl;

        if (j <= 5) {
            i += 2;
            j = 8;
        }
    }

    return 0;
}