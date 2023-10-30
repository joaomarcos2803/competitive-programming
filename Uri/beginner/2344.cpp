// https://www.beecrowd.com.br/judge/en/problems/view/2344

#include <iostream>

using namespace std;

int main() {
    int N;
    char conceito;

    cin >> N;

    if (N == 0)
        conceito = 'E';
    else if (N >= 1 && N < 36)
        conceito = 'D';
    else if (N >= 36 && N < 61)
        conceito = 'C';
    else if (N >= 61 && N < 86)
        conceito = 'B';
    else
        conceito = 'A';

    cout << conceito << endl;

    return 0;
}