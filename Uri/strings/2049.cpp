// https://www.beecrowd.com.br/judge/en/problems/view/2049

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int i, j, ok, count = 0;
    string a, str;

    cin >> a;

    while (a != "0") {
        cin >> str;

        ok = 0;
        count++;
        i = 0, j = 0;
        while(i < str.length()) {
            if (str[i] == a[j] && j < a.length()) {
                j++;
            }
            else if (str[i] != a[j]) {
                j = 0;
            }
            if(j == a.length()) {
                ok = 1;
            }
            i++;
        }
        cout <<"Instancia "<< count << endl;

        if (ok) {
            cout << "verdadeira" << endl;
        }
        else {
            cout << "falsa" << endl;
        }
        cin >> a;

        if (a != "0")
            cout << endl;
    }

    return 0;
}