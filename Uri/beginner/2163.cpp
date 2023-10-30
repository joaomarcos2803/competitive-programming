// https://www.beecrowd.com.br/judge/en/problems/view/2163

#include <iostream>

using namespace std;

int main() {
    int N, M, i, j;
    int X = 0, Y = 0;

    cin >> N >> M;
    
    int mat[N][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cin >> mat[i][j];
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (mat[i][j] == 42) {
                if (mat[i-1][j] == 7 && mat[i+1][j] == 7 && mat[i][j-1] == 7 
                && mat[i][j+1] == 7 && mat[i-1][j-1] == 7 && mat[i-1][j+1] == 7
                && mat[i+1][j-1] == 7 && mat[i+1][j+1] == 7)  {
                    X = i + 1;
                    Y = j + 1;
                }  
            }  
        } 
    }
    cout << X << " " << Y << endl;

    return 0;
}