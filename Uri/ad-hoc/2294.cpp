// https://www.beecrowd.com.br/judge/en/problems/view/2294

#include <iostream>
#include <string.h>
#include <queue>
#include <vector>

using namespace std;

int mat[12][12];
int dist[12][12];

queue<pair<int, int>> fila;

//adaptação do algoritmo BFS para encontrar a distancia minima
//para o duende sair do labirinto
int BFS(int x, int y) {
    int i, j, ux, uy, count;
    int movesX[4] = {1, -1, 0, 0};
    int movesY[4] = {0, 0, -1, 1};

    dist[x][y] = 0;
    fila.push(make_pair(x, y));

    while(!fila.empty()) {
        ux = fila.front().first;
        uy = fila.front().second;
        fila.pop();

        if (mat[ux][uy] == 0) {
            count = dist[ux][uy];
            return count;
        }

        for (i = 0; i < 4; i++) {
            if(mat[ux][uy] != 2 && dist[ux + movesX[i]][uy + movesY[i]] == -1) {
                dist[ux + movesX[i]][uy + movesY[i]] = dist[ux][uy] + 1;
                fila.push(make_pair(ux + movesX[i], uy + movesY[i]));
            }
        }
    }
}

int main() {
    int N, M, i, j, linhaInicial, colunaInicial;

    cin >> N >> M;
    
    memset(mat, 0, sizeof(mat));
    
    //começando os fors em 1 para criar paredes em volta das 
    //bordas da matriz
    for(i = 1; i <= N; i++) {
        for (j = 1; j <= M; j++) {
            cin >> mat[i][j];
            
            if (mat[i][j] == 3) {
                linhaInicial = i;
                colunaInicial = j;
            }
        }
    }
    //criando paredes em volta das bordas da matriz
    //para ajudar a adaptar a BFS para esse problema
    for (int i = 0; i <= M + 1; i++){
        mat[0][i] = 2;
        mat[N + 1][i] = 2;
    }
    for (int j = 0; j <= N + 1; j++){
        mat[j][0] = 2;
        mat[j][M + 1] = 2;
    }
    memset(dist, -1, sizeof(dist));
    cout << BFS(linhaInicial, colunaInicial) << endl;
    
    return 0;
}