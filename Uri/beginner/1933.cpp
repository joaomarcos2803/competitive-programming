// https://www.beecrowd.com.br/judge/en/problems/view/1933

#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B;

    if (A == B) 
        C = A;
    else if (A > B) 
        C = A;
    else if (A < B)
        C = B;
    
    cout << C << endl;
    
    return 0;
}