// https://www.beecrowd.com.br/judge/en/problems/view/1759

#include <iostream>

using namespace std;

int main() {
    int N;

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Ho" ;

        if (i == N)
            cout << "!\n";
        else
            cout << " ";
    }
    return 0;
}