// https://www.beecrowd.com.br/judge/en/problems/view/2523

#include <iostream>

using namespace std;

int main() {
    int N, l;
    string alphabet;

    while (cin >> alphabet) {
        cin >> N;

        string message;
        
        for (int i = 0; i < N; i++) {
            cin >> l;

            message += alphabet[l-1];
        }
        cout << message << endl;
    }
    return 0;
}