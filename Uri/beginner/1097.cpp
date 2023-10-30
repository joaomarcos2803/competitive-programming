// https://www.beecrowd.com.br/judge/en/problems/view/1097

#include <iostream>

using namespace std;

int main() {
    int i, j;

    for (int i = 1, j = 7; i <= 9; i += 2) {
        cout << "I=" << i << " J=" << j << endl;
        cout << "I=" << i << " J=" << j-1 << endl;
        cout << "I=" << i << " J=" << j-2 << endl;
        j += 2;
    }
    
    return 0;
}