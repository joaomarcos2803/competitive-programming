// https://www.beecrowd.com.br/judge/en/problems/view/2510

#include <iostream>

using namespace std;

int main() {
    int T, i;
    string str;
    cin >> T;

    for (i = 0; i < T; i++) {
        cin >> str;

        if (str == "Batman")
            cout << "N\n";
        else
            cout << "Y\n";
    }

    return 0;
}