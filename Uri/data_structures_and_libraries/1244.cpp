// https://www.beecrowd.com.br/judge/en/problems/view/1244

#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <ctype.h>

using namespace std;

vector<pair<string, int>> v;
vector<pair<string, int>>:: iterator it;

int comp(pair<string, int> a, pair<string, int> b) {
    return a.second > b.second;
}

int main() {
    int n, i, j, k;
    string str, aux;

    cin >> n;
    getchar();

    while(n--) {
        getline(cin, str);

        j = 0;
        k = 0;
        while(j <= str.length()) {
            if (isalpha(str[j])) {
                aux += str[j];
            }
            else {
                v.push_back(make_pair(aux, aux.length()));
                k++;
                aux.clear();
            }
            j++;
        }
        stable_sort(v.begin(), v.end(), comp);

        for (it = v.begin(); it != v.end(); it++) {
            cout << it->first;

            if (it != v.end() - 1)
                cout << " ";
        }
        cout << endl;
        v.clear();
    } 
    return 0;
}