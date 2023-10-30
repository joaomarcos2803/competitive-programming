// https://www.beecrowd.com.br/judge/en/problems/view/1140

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char firstLetter1;
    int i, j, tautogram;
    string s;
    char firstLetter[50];

    getline(cin, s);

    while (s[0] != '*') {
        j = 0;
        for (i = 0; i < s.length(); i++) {
            if (s[i] == ' ') { 
                firstLetter[j++] = s[i+1];
            }
        }
        firstLetter1 = s[0];
        tautogram = 1;
        for (i = 0; i < j; i++) {
            if ((firstLetter[i] != firstLetter1) && (firstLetter[i] != toupper(firstLetter1)) &&
            (firstLetter[i] != tolower(firstLetter1))) {
                tautogram = 0;
            }
        }
        if (tautogram) 
            cout << "Y\n";
        else
            cout << "N\n";

        getline(cin, s);
    }
    return 0;
}