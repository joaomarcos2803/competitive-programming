// https://www.beecrowd.com.br/judge/en/problems/view/2131

#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int color[101]; 
int visitado[101];

vector<int> adj[101];

//adaptação do DFS para verificar se um grafo é bipartido
int checkBipartiteGraph(int v){
   for (int u : adj[v]) {
        if (visitado[u] == false) {
            visitado[u] = true;
            
            //vizinhos do vertice atual recebem uma cor diferente
            if(color[v] == 1) {
                color[u] = 2;
            }
            else {
                color[u] = 1;
            }

            if (!checkBipartiteGraph(u))
                return 0;
        }
        else if (color[u] == color[v]) {
            return 0;
        }
   }
   return 1;
}

int main() {
    int N, M, i, u, v;
    int k = 1;

    while (scanf("%d %d", &N, &M) != EOF) {
        for (i = 0; i < M; i++) {
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        memset(visitado, 0, sizeof(visitado));
        memset(color, 0, sizeof(color));

        visitado[1] = 1;
        color[1] = 1;

        printf("Instancia %d\n", k);
        k++;

        if (checkBipartiteGraph(1)) {
            printf("sim\n");
        }
        else {
            printf("nao\n");
        }
        printf("\n");

        memset(adj, 0, sizeof(adj));
    }
    return 0;
}