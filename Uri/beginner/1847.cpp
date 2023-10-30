// https://www.beecrowd.com.br/judge/en/problems/view/1847

#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    if(A > B && C >= B)
        cout << ":)" << endl;
    else if (B > A && C <= B)
        cout << ":(" << endl;
    else if (B > A && C > B && C-B < B-A)
        cout << ":(" << endl;
    else if (B > A && C > B && C-B >= B-A)
        cout << ":)" << endl;
    else if (A > B && B > C && C-B > B-A )
        cout << ":)" << endl;
    else if (A > B && B > C && C-B <= B-A)
        cout << ":(" << endl;
    else if (A == B && C > B)
        cout << ":)" << endl;
    else if (A == B && C < B)
        cout << ":(" << endl;
    else 
        cout << ":(" << endl;
    
    return 0;
}