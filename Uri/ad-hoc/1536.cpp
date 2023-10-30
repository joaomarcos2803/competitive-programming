// https://www.beecrowd.com.br/judge/en/problems/view/1536

#include <iostream>

using namespace std;

int main() {
    int N, M1, V1, M2, V2, i;
    char aux;
    int goalsTeam1, goalsTeam2;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> M1 >> aux >> V1;
        cin >> M2 >> aux >> V2;

        goalsTeam1 = M1 + V2;
        goalsTeam2 = M2 + V1;

        if (goalsTeam1 > goalsTeam2) {
            cout << "Time 1\n";
        }
        else if (goalsTeam2 > goalsTeam1) {
            cout << "Time 2\n";
        }
        else {
            if (V2 > V1) {
                cout << "Time 1\n";
            }
            else if (V1 > V2) {
                cout << "Time 2\n";
            }
            else {
                cout << "Penaltis\n";
            }
        }
    }
    return 0;
}