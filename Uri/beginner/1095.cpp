// https://www.beecrowd.com.br/judge/en/problems/view/1095

#include <iostream>

using namespace std;

int main() {
    int i, j;

    for (int i = 1, j = 60; j >= 0; i += 3, j -= 5) {
        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}