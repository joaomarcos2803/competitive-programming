// https://www.beecrowd.com.br/judge/en/problems/view/1835

#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int visitado[101];
vector<int> adj[101];

int DFS(int v) {
    vector<int>::iterator it;

    visitado[v] = 1;
    
    for (it = adj[v].begin(); it != adj[v].end(); it++) {
        if (!visitado[*it]) {
            DFS(*it);
        }
    }
}


int connectedComponents(int n) {
    int count = 0, i;

    memset(visitado, 0, sizeof(visitado));
    for (i = 0; i < n; i++) {
        if (!visitado[i]) {
            DFS(i);
            count++;
        }
    }
    return count;
}

int main() {
    int t, n, m;
    int i, j, x, y;
    int countTestes = 1;
    int componentesConexas;

    cin >> t;

    while(t--) {
        cin >> n >> m;

        memset(adj, 0, sizeof(adj));
        for(i = 0; i < m; i++) {
            cin >> x >> y;
            adj[x-1].push_back(y-1);
            adj[y-1].push_back(x-1);
        }
        componentesConexas = connectedComponents(n);

        cout << "Caso #" << countTestes << ": "; 
        countTestes++;

        if (componentesConexas == 1) {
            cout << "a promessa foi cumprida" << endl;
        }
        else {
            cout << "ainda falta(m) " << componentesConexas - 1 << " estrada(s)" << endl;
        }
    }
    return 0;
}