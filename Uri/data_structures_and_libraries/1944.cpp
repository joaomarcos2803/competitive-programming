// https://www.beecrowd.com.br/judge/en/problems/view/1944

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    int n, i, j, count;
    char letter;
    stack<string> s;
    string aux, aux2;

    while (cin >> n) {
        count = 0;
        s.push("FACE");
        for (i = 0; i < n; i++) {
            aux.clear();
            for (j = 0; j < 4; j++) {
                cin >> letter;

                aux.push_back(letter);
            }
            aux2 = aux;
            reverse(aux2.begin(), aux2.end());
            
            if (aux2 == s.top()) {
                count++;
                s.pop();

                if (s.size() == 0) {
                    s.push("FACE");
                }
            }
            else {
                s.push(aux);
            }
        }
        while (!s.empty()) {
            s.pop();
        }
        cout << count << endl;
    }
    return 0;
}