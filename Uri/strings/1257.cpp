// https://www.beecrowd.com.br/judge/en/problems/view/1257

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, l, i, j, k, finalHash;
    string str;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> l;

        cin.ignore();
        finalHash = 0;
        
        for (j = 0; j < l; j++) {
            getline(cin, str);

           for(k = 0; k < str.length(); k++) {
               finalHash += str[k] - 65 + j + k;
           }
        }
        cout << finalHash << endl;
    }
}