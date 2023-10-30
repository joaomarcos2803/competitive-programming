// https://www.beecrowd.com.br/judge/en/problems/view/1799

#include <bits/stdc++.h>

using namespace std;

queue<int> fila;
map<string, int> mp;
vector<int> adj[5001];

int visitado[4001];
int dist[4001];

int BFS(int s, int posQueijo, int dest, int n) {
    int i, u;

    memset(dist, -1, sizeof(dist));
    memset(visitado, 0, sizeof(visitado));
    dist[posQueijo] = 0;
    fila.push(posQueijo);

    while (!fila.empty()) {
        u = fila.front();
        fila.pop();

        for (auto i : adj[u]) {
            if (!visitado[i]) {
                visitado[i] = 1;
                fila.push(i);
                dist[i] = dist[u] + 1;
            }
        }
    }
    return dist[s] + dist[dest];
}
    

int main() {
    int n, m, i, count = 0;
    string ponto1, ponto2;
    int posQueijo, posEntrada, posSaida;

    cin >> n >> m;

    for(i = 0; i < m; i++) {
        cin >> ponto1 >> ponto2;

        if (mp.count(ponto1) == 0) {
            mp[ponto1] = count;
            count++;
        }
        if (mp.count(ponto2) == 0) {
            mp[ponto2] = count;
            count++;
        }
        if(ponto1 == "Entrada") {
            posEntrada = mp[ponto1];
        }
        if(ponto2 == "Entrada") {
            posEntrada = mp[ponto2];
        }
        if(ponto1 == "Saida") {
            posSaida = mp[ponto1];
        }
        if(ponto2 == "Saida") {
            posSaida = mp[ponto2];
        }
        if(ponto1 == "*") {
            posQueijo = mp[ponto1];
        }
        if(ponto2 == "*") {
            posQueijo = mp[ponto2];
        }
        adj[mp[ponto1]].push_back(mp[ponto2]);
        adj[mp[ponto2]].push_back(mp[ponto1]);
    }
    cout << BFS(posEntrada, posQueijo, posSaida, n) << endl;
    
    return 0;
}