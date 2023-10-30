// https://www.beecrowd.com.br/judge/en/problems/view/2057

#include <iostream>

using namespace std;

int main() {
    int S, T, F;
    int destinationTime;

    cin >> S >> T >> F;

    destinationTime = S + T + F;

    if (S == 0) {
        destinationTime += 24;
    }
    if (destinationTime >= 24) {
        destinationTime -= 24;
    }
    cout << destinationTime << endl;

    return 0;
}