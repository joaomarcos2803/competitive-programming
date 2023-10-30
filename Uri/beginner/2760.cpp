// https://www.beecrowd.com.br/judge/en/problems/view/2760

#include <iostream>

using namespace std;

int main() {
    string phrase1, phrase2, phrase3;

    getline(cin, phrase1);
    getline(cin, phrase2);
    getline(cin, phrase3);

    cout << phrase1 << phrase2 << phrase3 << endl;
    cout << phrase2 << phrase3 << phrase1 << endl;
    cout << phrase3 << phrase1 << phrase2 << endl;
    cout << phrase1.substr(0, 10) << phrase2.substr(0, 10) << phrase3.substr(0, 10) << endl;

    return 0;
}