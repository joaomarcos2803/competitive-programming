// https://www.beecrowd.com.br/judge/en/problems/view/2670

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A1, A2, A3;
    int timeSpent[3];

    cin >> A1 >> A2 >> A3;

    timeSpent[0] = 2 * A2 + 4 * A3;
    timeSpent[1] = 2 * A1 + 2 * A3;
    timeSpent[2] = 4 * A1 + 2 * A2;

    sort(timeSpent, timeSpent + 3);

    cout << timeSpent[0] << endl;

    return 0;
}
