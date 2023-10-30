// https://www.beecrowd.com.br/judge/en/problems/view/1367

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, t, i, count, totalTime;
    int time[26], aditionalTime[26];

    char letter;
    string judgment;

    cin >> n;

    while(n) {
        memset(time, 0, sizeof(time));
        memset(aditionalTime, 0, sizeof(aditionalTime));

        for(i = 0; i < n; i++) {
            cin.ignore();
            cin >> letter >> t >> judgment;

            if(judgment == "incorrect") {
                aditionalTime[int(letter) - 65] += 20;
            }
            else {
                time[int(letter) - 65] = t;
            }
        }
        totalTime = 0;
        count = 0;
        for (i = 0; i < 26; i++) {
            if(time[i] != 0) {
                totalTime += (time[i] + aditionalTime[i]);
                count++;
            }
        }
        cout << count << " " << totalTime << endl;

        cin >> n;
    }
    return 0;
}