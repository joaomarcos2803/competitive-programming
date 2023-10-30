// https://www.beecrowd.com.br/judge/en/problems/view/2552

#include <iostream>

using namespace std;

int gameBoard(int N, int M, int mat[100][100], int i, int j) {
	int sum = 0;

	if (i > 0 && mat[i - 1][j] == 1) sum++;
	if (i < N-1 && mat[i + 1][j] == 1) sum++;
	if (j > 0 && mat[i][j - 1] == 1) sum++;
	if (j < M-1 && mat[i][j + 1] == 1) sum++;

	return sum;
}

int main() {
    int N, M, i, j, sum;
    int mat[100][100];
    
    while(cin >> N >> M) {
        for(i = 0; i < N; i++) {
            for(j = 0; j < M; j++) {
                cin >> mat[i][j];
            }
        }
        for(i = 0; i < N; i++) {
            for(j = 0; j < M; j++) {
                if (mat[i][j] == 1) 
                    cout << 9;
                else
                    cout << gameBoard(N, M, mat, i, j);
            }
            cout << endl;
        }
    }
    return 0;
}