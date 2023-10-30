// https://www.beecrowd.com.br/judge/en/problems/view/1983

#include <iostream>

using namespace std;

int main() {
    int n, m, highestScoreNumber, count = 0;
    double note, highestScore = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m >> note;

        if (note > highestScore) {
            highestScore = note;
            highestScoreNumber = m;
        }
    }

    if (highestScore < 8) 
        cout << "Minimum note not reached\n";
    else
        cout << highestScoreNumber << endl;

    return 0;
}