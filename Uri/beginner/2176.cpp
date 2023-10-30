// https://www.beecrowd.com.br/judge/en/problems/view/2176

#include <iostream>

using namespace std;

int main() {
    string S;
    int countValues1 = 0, i;
    cin >> S;

    for (i = 0; i < S.length(); i++) { 
        if (S[i] == '1')
            countValues1++;
    }
    if (countValues1 % 2 != 0)
        S += '1';
    else
        S += '0';

    cout << S << endl;

    return 0;
}