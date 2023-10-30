// https://www.beecrowd.com.br/judge/en/problems/view/1541

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int A, B, C, size;

    while (true) {
        cin >> A;

        if (A == 0)
            break;
        else {
            cin >> B >> C;

            size = sqrt((A * B * 100) / C);
            
            cout << size << endl;
        }
    }
    return 0;
}