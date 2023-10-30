// https://www.beecrowd.com.br/judge/en/problems/view/2717

#include <iostream>

using namespace std;

int main() {
    int N, A, B;

    cin >> N;
    cin >> A >> B;

    if ((A + B) <= N)
        cout << "Farei hoje!\n";
    else
        cout << "Deixa para amanha!\n";

    return 0;
}