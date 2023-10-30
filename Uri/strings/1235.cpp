// https://www.beecrowd.com.br/judge/en/problems/view/1235

#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    string str, originalOrder;

    cin >> n;
    cin.ignore();

    for(i = 0; i < n; i++) {
        getline(cin, str);

        for (j = (str.length() - 1) / 2; j >= 0; j--) {
            originalOrder += str[j];
        }
        for (j = str.length() - 1; j >= str.length() / 2; j--) {
            originalOrder += str[j];
        }
        cout << originalOrder << endl;

        originalOrder.clear();
    }
    return 0;
}