// https://www.beecrowd.com.br/judge/en/problems/view/2653

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> joia;
    string str;

    while (cin >> str)
        joia.insert(str);
    
    cout << joia.size() << endl;

    return 0;
}