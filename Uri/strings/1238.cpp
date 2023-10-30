// https://www.beecrowd.com.br/judge/en/problems/view/1238

#include <iostream>

using namespace std;

int main() {
    int i, n, count1, count2;
    string str1, str2, combinedString;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> str1 >> str2;

        count1 = 0, count2 = 0;
        while(count1 < str1.length() && count2 < str2.length()) {
            if (count1 <= count2) {
                combinedString += str1[count1];
                count1++;
            }
            else {
                combinedString += str2[count2];
                count2++;
            }
        }
        while(count1 < str1.length()) {
            combinedString += str1[count1++];
        }
        while(count2 < str2.length()) {
            combinedString += str2[count2++];
        }
        cout << combinedString << endl;

        combinedString.clear();
    }
    return 0;
}
