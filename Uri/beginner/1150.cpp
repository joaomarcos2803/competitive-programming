// https://www.beecrowd.com.br/judge/en/problems/view/1150

#include <iostream>

using namespace std;

int main() {
    int X, Z, sum = 0;
    int count = 0;

    cin >> X >> Z;

    while (Z <= X) {
        cin >> Z;
    }

    for (int i = X; Z > sum; i++) {
        sum += i;
        count++;
    }

    cout << count << endl;
    
    return 0;
}