// https://www.beecrowd.com.br/judge/en/problems/view/1118

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double score, media, total;
    int validScores = 0, X;

    while (true) {
        total = 0;
        while (validScores != 2) {
            cin >> score;
            if (score >= 0 && score <= 10) {
                total += score;
                validScores++;
            }
            else {
                cout << "nota invalida\n";
            }
        }
        media = total / 2;
        cout << "media = " << fixed << setprecision(2) << media << endl;
        validScores = 0;

        while (true) {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> X;

            if (X == 1 || X == 2) {
                break;
            }
        }
        if (X == 2) {
            break;
        }
    }
    return 0;
}