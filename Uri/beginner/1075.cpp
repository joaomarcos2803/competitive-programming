// https://www.beecrowd.com.br/judge/en/problems/view/1075

#include <iostream>

using namespace std;

int main() {
    int N, X;
    
    cin >> N;

    for (int i = 1; i < 10000; i++) {
        if (i % N == 2) 
            cout << i << endl;
    }
    return 0;
}