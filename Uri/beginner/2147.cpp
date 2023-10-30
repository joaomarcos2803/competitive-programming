// https://www.beecrowd.com.br/judge/en/problems/view/2147

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int C;
    double T;
    string typedword;

    cin >> C;

    for (int i = 0; i < C; i++) {
        cin >> typedword;

        T = typedword.length() * (double) 1 / (double) 100;
        cout << fixed << setprecision(2) << T << endl;
    }

    return 0;
}