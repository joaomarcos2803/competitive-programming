// https://www.beecrowd.com.br/judge/en/problems/view/1234

#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    int i;
    int previousLetter; //1: maiuscula, -1: minuscula
    int isFirstLetter; 
    string str;

    while(getline(cin, str)) {
        isFirstLetter = 1;
        for (i = 0; i < str.length(); i++) {
            if (isalpha(str[i]) && isFirstLetter == 1) {
                str[i] = toupper(str[i]);
                isFirstLetter = 0;
                previousLetter = 1;
            }
            else if (isalpha(str[i]) && previousLetter == 1) {
                str[i] = tolower(str[i]);
                previousLetter = -1;
            }
            else if (isalpha(str[i]) && previousLetter == -1) {
                str[i] = toupper(str[i]);
                previousLetter = 1;
            }
        }
        cout << str << endl;
    }
    return 0;
}
