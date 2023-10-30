// https://www.beecrowd.com.br/judge/en/problems/view/2003

#include <iostream>

using namespace std;

int main() {
    int a, c;
    char b;

    while (cin >> a >> b >> c) {
        if (a < 7) {
            cout << "Atraso maximo: 0\n";
        }
        else {
            cout << "Atraso maximo: " << ((a - 7) * 60) + c << endl;
        }
    }
    
    return 0;
}