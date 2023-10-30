// https://www.beecrowd.com.br/judge/en/problems/view/2708

#include <iostream>

using namespace std;

int main() {
    int t, tourists, jeeps;
    string str;

    tourists = 0, jeeps = 0;
    while (cin >> str && str != "ABEND") {
        cin >> t;

        if (str == "SALIDA") {
            jeeps++;
            tourists += t;
        }
        else if (str == "VUELTA") {
            jeeps--;
            tourists -= t;
        }
    }
    cout << tourists << endl << jeeps << endl;

    return 0;
}