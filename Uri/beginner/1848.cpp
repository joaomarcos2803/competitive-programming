// https://www.beecrowd.com.br/judge/en/problems/view/1848

#include <iostream>

using namespace std;

int main() {
    char text[50];
    int sum = 0, i = 0;

    while (i != 3) {
        cin.getline(text, sizeof(text));

        if (text[0] == '*')
            sum += 4;
        if (text[1] == '*') 
            sum += 2;
        if (text[2] == '*')
            sum += 1;

        if (text[0] == 'c') {
            cout << sum << endl;
            sum = 0;
            i++;
        }
    }
    return 0;
}