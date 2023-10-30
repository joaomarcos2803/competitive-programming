// https://www.beecrowd.com.br/judge/en/problems/view/1145

#include <iostream>

using namespace std;

int main() {
    int X, Y;
    int num = 1;

    cin >> X >> Y;

    for (int i = 1; i <= Y; i++) {
        if (num == X) {
            cout << i << endl;
            num = 1;
        }
        else {
            cout << i << " ";
            num++;
        }
    }
    return 0;
}