// https://www.beecrowd.com.br/judge/en/problems/view/1107

#include <iostream>

using namespace std;

int main() {
    int A, C, i;
    int height, previousHeight;
    int count, firstHeight;

    cin >> A >> C;

    while (A || C) {
        cin >> firstHeight;
        count = 0;
        count = A - firstHeight;
        previousHeight = firstHeight;
        for (i = 1; i < C; i++) {
            cin >> height;
        
            if (height < previousHeight) {
       		    count += previousHeight - height;
            }
            previousHeight = height;
        }
        cout << count << endl;
        
        cin >> A >> C;
    }
    return 0;
}