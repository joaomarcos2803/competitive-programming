// https://www.beecrowd.com.br/judge/en/problems/view/1070

#include <iostream>

using namespace std;

int main() {
    int number;
    
    cin >> number;

    for (int i = number; i < number + (6 * 2); i++) {
        if (i % 2 != 0)
            cout << i << endl;
    }
    return 0;
}