// https://www.beecrowd.com.br/judge/en/problems/view/1437

#include <iostream>

using namespace std;

int main() {
    int n, i;
    char string;
    char direction;

    cin >> n;

    while (n) {
        direction = 'N';
        for (i = 0; i < n; i++) {
            cin >> string;

            if (string == 'D' && direction == 'N') {
                direction = 'L';
            }
            else if (string == 'D' && direction == 'L') {
                direction = 'S';
            }
            else if (string == 'D' && direction == 'S') {
                direction = 'O';
            }
            else if (string == 'D' && direction == 'O') {
                direction = 'N';
            }
            else if (string == 'E' && direction == 'N') {
                direction = 'O';
            }
            else if (string == 'E' && direction == 'L') {
                direction = 'N';
            }
            else if (string == 'E' && direction == 'S') {
                direction = 'L';
            }
            else if (string == 'E' && direction == 'O') {
                direction = 'S';
            }  
        }
        cout << direction << endl;
        cin >> n;
    }
    return 0;
}