// https://www.beecrowd.com.br/judge/en/problems/view/2702

#include <iostream>

using namespace std;

int main() {
    int Ca, Ba, Pa, Cr, Br, Pr;
    int answer = 0;

    cin >> Ca >> Ba >> Pa;
    cin >> Cr >> Br >> Pr;

    if (Cr > Ca)
        answer += Cr - Ca;
    if (Br > Ba)
        answer += Br - Ba;
    if (Pr > Pa)
        answer += Pr - Pa;

    cout << answer << endl;

    return 0;
}