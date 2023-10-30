// https://www.beecrowd.com.br/judge/en/problems/view/1146

#include <iostream>

using namespace std;

int main() {
    int X;

    while (true) {
        cin >> X;

        if (X == 0)
            break;
        else {
            for (int i = 1; i < X; i++) {
                cout << i << " ";
            }
            cout << X << endl;
        }
    }
    return 0;
}