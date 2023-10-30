// https://www.beecrowd.com.br/judge/en/problems/view/1128

#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

int mat[2100][2100];
int visitado[2100];

void DFSrec(int u, int N) {
    int i;

    if(!visitado[u]) {
        visitado[u] = 1;
    }
    for (i = 0; i < N; i++) {
        if (mat[u][i] && !visitado[i]) {
            DFSrec(i, N);
        }
    }
}

int main() {
    int N, M, V, W, P, G, i, j;

    cin >> N >> M;

    while(N || M) {
        memset(mat, 0, sizeof(mat));

        for (i = 0; i < M; i++) {
            cin >> V >> W >> P;

            mat[V-1][W-1] = 1;

            if (P == 2) {
                mat[W-1][V-1] = 1;
            }
        }
        //assumindo que o grafo é conexo
        G = 1;
        //busca em profundidade em todos os vertices do grafo
        for (i = 0; i < N; i++) {
            memset(visitado, 0, sizeof(visitado));
            
            DFSrec(i, N);
            //percorre o vetor de visitado de cada busca
            for (j = 0; j < N; j++) {
                if(!visitado[j]) {
                    G = 0;
                    break;
                }
            }
            //se algum vertice não foi visitado, não precisa continuar
            if (G == 0) {
                break;
            }
        }
        cout << G << endl;
        cin >> N >> M;
    }
    return 0;
}