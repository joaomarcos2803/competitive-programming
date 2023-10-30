// https://www.beecrowd.com.br/judge/en/problems/view/1098

#include <iostream>

using namespace std;

int main() {
    double i , j;

    for (i = 0, j = 1; i <= 2; i += 0.2, j += 0.2) {
        cout << "I=" << i << " J=" << j << endl;
        cout << "I=" << i << " J=" << j+1 << endl;
        cout << "I=" << i << " J=" << j+2 << endl;
    }
    
    return 0;
}