// https://www.beecrowd.com.br/judge/en/problems/view/1253

#include <iostream>

using namespace std;

int main() {
    int N, i, j, shift;
    string str;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> str;
        cin >> shift;

        for(j = 0; j < str.length(); j++) {
            str[j] = str[j] - shift;

            if(str[j] < 65) 
                str[j] += 26;
        }
        cout << str << endl;
    }
    return 0;
}
