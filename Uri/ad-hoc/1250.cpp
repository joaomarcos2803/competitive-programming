// https://www.beecrowd.com.br/judge/en/problems/view/1250

#include <iostream>

using namespace std;

int main() {
    int n, s, i, j;
    char jumps[52];
    int heights[52];
    int hits;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> s;
        hits = 0;

        for (j = 0; j < s; j++) {
            cin >> heights[j];
        }
        for (j = 0; j < s; j++) {
            cin >> jumps[j];
        }

        for (j = 0; j < s; j++) {
            if (jumps[j] == 'S' && heights[j] <= 2) {
                hits++;
            }
            else if (jumps[j] == 'J' && heights[j] > 2) {
                hits++;
            }
        }
        cout << hits << endl;
    }
    return 0;
}