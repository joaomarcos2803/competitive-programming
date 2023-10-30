// https://www.beecrowd.com.br/judge/en/problems/view/2951

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, g, i, x, value, amount = 0;
    unordered_map<char, int> mp;
    char rune;

    cin >> n >> g;

    for (i = 0; i < n; i++) {
        cin >> rune >> value;
        mp.insert(make_pair(rune, value));
    }

    cin >> x;
    
    for (i = 0; i < x; i++) {
        cin >> rune;

        if (mp.find(rune) != mp.end()) {
            amount += mp[rune];
        }
    }
    cout << amount << endl;

    if (amount >= g) {
        cout << "You shall pass!" << endl;
    }
    else {
        cout << "My precioooous" << endl;
    }
    return 0;
}