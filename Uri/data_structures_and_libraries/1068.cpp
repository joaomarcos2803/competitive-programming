// https://www.beecrowd.com.br/judge/en/problems/view/1068

#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

int main() {
    int i, ok;
    int leftParentesis, rightParentesis;
    string str;

    while (getline(cin, str)) {
        leftParentesis = 0;
        rightParentesis = 0;
        for (i = 0; i < str.length(); i++)
        {
            if (str[i] == '(') {
                leftParentesis++;
            }
            else if (str[i] == ')') {
                rightParentesis++;
                if (rightParentesis > leftParentesis)
                    rightParentesis++;
            }
        }
        if (leftParentesis == rightParentesis)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }
    return 0;
}