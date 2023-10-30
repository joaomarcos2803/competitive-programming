// https://www.beecrowd.com.br/judge/en/problems/view/1273

#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, i, j, length;
    string str;
    vector<pair<int, string>> vec;
    vector<pair<int, string>>:: iterator it;
    
    cin >> n;

    while (n) {
        cin.ignore();
        for(i = 0; i < n; i++) {
            getline(cin, str);
            vec.push_back(make_pair(str.length(), str));
        }
        it = max_element(vec.begin(), vec.end());
        length = it->first;
        
        for(i = 0; i < n; i++) {
            for(j = 0; j < length - vec[i].first; j++) {
                cout << ' ';
            }
            cout << vec[i].second << endl;
        }
        cin >> n;

        if (n) {
            cout << endl;
        }
        vec.clear();
    }
    return 0;
}