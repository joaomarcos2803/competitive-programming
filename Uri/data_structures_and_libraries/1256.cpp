// https://www.beecrowd.com.br/judge/en/problems/view/1256

#include <iostream>
#include <vector>

using namespace std;

vector<int> hashTable[101];
vector<int>:: iterator it;

int main() {
    int T, M, C, i, key;

    cin >> T;

    while(T--) {
        cin >> M >> C;

        for(i = 0; i < C; i++) {
            cin >> key;
            hashTable[key % M].push_back(key);
        }
        for(i = 0; i < M; i++) {
            cout << i << " -> ";
            for(it = hashTable[i].begin(); it != hashTable[i].end(); it++) {
                cout << *it << " -> ";
            }
            cout << "\\" << endl;
        }
        for(i = 0; i < M; i++) {
            hashTable[i].clear();
        }
        if (T >= 1) {
            cout << endl;
        }
    }
    return 0;
}