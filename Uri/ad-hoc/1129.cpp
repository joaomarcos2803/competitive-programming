// https://www.beecrowd.com.br/judge/en/problems/view/1129

#include <iostream>

using namespace std;

int main() {
    int n, A, B, C, D, E;
    int i;

    cin >> n;

    while (n) {
        for (i = 0; i < n; i++) {
            cin >> A >> B >> C >> D >> E;
            
            if (A <= 127 && B > 127 && C > 127 && D > 127 && E > 127)
                cout << "A" << endl;
            else if (A > 127 && B <= 127 && C > 127 && D > 127 && E > 127)
                cout << "B" << endl;
            else if (A > 127 && B > 127 && C <= 127 && D > 127 && E > 127)
                cout << "C" << endl;
            else if (A > 127 && B > 127 && C > 127 && D <= 127 && E > 127)
                cout << "D" << endl;
            else if (A > 127 && B > 127 && C > 127 && D > 127 && E <= 127)
                cout << "E" << endl;
            else
                cout << "*" << endl;
        }
        cin >> n;
    }
    return 0;
}