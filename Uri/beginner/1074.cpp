// https://www.beecrowd.com.br/judge/en/problems/view/1074

#include <iostream>

using namespace std;

int main() {
    int N, X;
    
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;

        if (X == 0)
            cout << "NULL\n";
        else {
            if (X % 2 == 0)
                cout << "EVEN ";
            else 
                cout << "ODD ";

            if (X < 0) 
                cout << "NEGATIVE\n";
            else 
                cout << "POSITIVE\n"; 
        }
    }     
    return 0;
}