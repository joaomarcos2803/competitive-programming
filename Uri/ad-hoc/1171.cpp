// https://www.beecrowd.com.br/judge/en/problems/view/1171

#include <iostream>

using namespace std;

int main() {
    int n, x, i;
    int number[2001] = {0};

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> x;

        number[x]++;
    }
    for (i = 1; i <= 2000; i++) {
        if (number[i] != 0)
            cout << i << " aparece " << number[i] << " vez(es)" << endl;
    }
    return 0;
}
