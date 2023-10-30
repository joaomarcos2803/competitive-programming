// https://www.beecrowd.com.br/judge/en/problems/view/1072

#include <iostream>

using namespace std;

int main() {
    int n, X, valuesIn = 0, valuesOut = 0;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> X;

        if (X >= 10 && X <= 20)
            valuesIn++;
        else
            valuesOut++;
    }
    cout << valuesIn << " in\n";
    cout << valuesOut << " out\n";
    
    return 0;
}