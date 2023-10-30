// https://www.beecrowd.com.br/judge/en/problems/view/2235

#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    if (A - B == 0)
        cout << "S\n";
    else if (A - C == 0)
        cout << "S\n";
    else if (B - C == 0)
        cout << "S\n";
    else if (A - C == 0)
        cout << "S\n";
    else if ((A + B) - C == 0)
        cout << "S\n";
    else if ((A + C) - B== 0)
        cout << "S\n";
    else if ((B + C) - A == 0)
        cout << "S\n";
    else 
        cout << "N\n";
    
    return 0;
}