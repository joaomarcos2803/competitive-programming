// https://www.beecrowd.com.br/judge/en/problems/view/3241

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n, i, j, k, a, b;
    string str;
    char num1[4], num2[4];

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> str;

        if (str == "P=NP")
            cout << "skipped" << endl;
        else {
            j = 0;
            k = 0;
            while (str[j] != '+') {
                num1[k++] = str[j++];
            }
            j++;
            k = 0;
            while(str[j] != '\0') {
                num2[k++] = str[j++];
            }
            a = atoi(num1);
            b = atoi(num2);

            cout << a + b << endl;

            memset(num1, 0, sizeof(num1));
            memset(num2, 0, sizeof(num2));
        }
    }
    return 0;
}