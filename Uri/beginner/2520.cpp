// https://www.beecrowd.com.br/judge/en/problems/view/2520

#include <iostream>

using namespace std;

int main() {
    int N, M, i, j, minimumTime;
    int analogimonLine, analogimonColumn, playerLine, playerColumn;
    int city[100][100];

    while (cin >> N >> M) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                cin >> city[i][j];

                if (city[i][j] == 2) {
                    analogimonLine = i;
                    analogimonColumn = j;
                }
                if (city[i][j] == 1) {
                    playerLine = i;
                    playerColumn = j;
                }
            }
        }
        minimumTime = abs(analogimonColumn - playerColumn) + abs(analogimonLine - playerLine);
        cout << minimumTime << endl;
    }
    return 0;
}