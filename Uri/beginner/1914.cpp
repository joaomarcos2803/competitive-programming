// https://www.beecrowd.com.br/judge/en/problems/view/1914

#include <iostream>

using namespace std;

int main() {
    int QT, N, M;
    string namePlayer1, namePlayer2;
    string choicePlayer1, choicePlayer2;
    string winner;

    cin >> QT;

    for (int i = 0; i < QT; i++) {
        cin >> namePlayer1 >> choicePlayer1 >> namePlayer2 >> choicePlayer2;
        cin >> N >> M;

        if ((N + M) % 2 == 0) {
            if (choicePlayer1 == "PAR")
                cout << namePlayer1 << endl;
            else
                cout << namePlayer2 << endl;
        }
        else {
            if (choicePlayer1 == "IMPAR")
                cout << namePlayer1 << endl;
            else 
                cout << namePlayer2 << endl;
        }
    }
    return 0;
}