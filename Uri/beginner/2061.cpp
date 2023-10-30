// https://www.beecrowd.com.br/judge/en/problems/view/2061

#include <iostream>

using namespace std;

int main() {
    int N, M, finalNumberTabs;
    string text;

    cin >> N >> M;

    finalNumberTabs = N;

    for (int i = 0; i < M; i++) {
        cin >> text;

        if (text == "fechou") {
            finalNumberTabs++;
        }
        else if (text == "clicou")
            finalNumberTabs--;
    }

    cout << finalNumberTabs << endl;

    return 0;
}