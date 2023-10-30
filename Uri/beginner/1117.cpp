// https://www.beecrowd.com.br/judge/en/problems/view/1117

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double score, media, total = 0;
    int validScores = 0;

    while (true) {
        cin >> score;

        if (score >= 0 && score <= 10) {
            total += score;
            validScores++;
        }
        else {
            cout << "nota invalida\n";
        }

        if (validScores == 2)
            break;
    }
    media = total / 2;
    cout << "media = " << fixed << setprecision(2) << media << endl;
    
    return 0;
}