// https://www.beecrowd.com.br/judge/en/problems/view/1080

#include <iostream>

using namespace std;

int main() {
    int i, highest = -100000;
    int number, position;

    for (i = 1; i <= 100; i++) {
        cin >> number;
        if (number > highest) {
            highest = number;
            position = i;
        }
    }
    cout << highest << endl << position << endl;

    return 0;
}