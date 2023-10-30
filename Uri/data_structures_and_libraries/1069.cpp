// https://www.beecrowd.com.br/judge/en/problems/view/1069

#include <iostream>

using namespace std;

int main() {
    int n, i, j, count, leftDiamond;
    string str;

    cin >> n;
    cin.ignore();

    for (i = 0; i < n; i++) {
        getline(cin, str);

        leftDiamond = 0, count = 0;
        for (j = 0; j < str.length(); j++) {
            if(str[j] == '<') {
                leftDiamond++;
            }
            if (str[j] == '>' && leftDiamond > 0) {
                count++;
                leftDiamond--;
            }
        }
        cout << count << endl;
    }
    return 0;
}
