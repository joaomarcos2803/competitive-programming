// https://www.beecrowd.com.br/judge/en/problems/view/2160

#include <iostream>

using namespace std;

int main() {
    string text;

    getline(cin, text);

    if (text.length() > 80)
        cout << "NO\n";
    else
        cout << "YES\n";
    
    return 0;
}