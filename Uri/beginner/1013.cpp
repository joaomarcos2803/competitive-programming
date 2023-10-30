// https://www.beecrowd.com.br/judge/en/problems/view/1013

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, C, greatestAB, greatestABC;

    cin >> A >> B >> C;
    greatestAB = (A + B + abs(A-B)) / 2;
    greatestABC = (greatestAB + C + abs (greatestAB - C)) / 2;
    cout << greatestABC << " eh o maior" << endl;

    return 0;
}