// https://www.beecrowd.com.br/judge/en/problems/view/1467

#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    while (cin >> A >> B >> C) {
        if (A == 1 && B == 0 && C == 0 || A == 0 && B == 1 && C == 1)
            cout << "A" << endl;
        else if(A == 0 && B == 1 && C == 0 || A == 1 && B == 0 && C == 1)
            cout << "B" << endl;
        else if(A == 0 && B == 0 && C == 1 || A == 1 && B == 1 && C == 0)
            cout << "C" << endl;
        else
            cout << "*" << endl;
    }
    return 0;
}