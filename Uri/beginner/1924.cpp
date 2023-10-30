// https://www.beecrowd.com.br/judge/en/problems/view/1924

#include <iostream>

using namespace std;

int main() {
    int n;
    string course;

    cin >> n;

    for (int i = 0; i < n; i++) {
        getline(cin, course);
        getchar();
    }
    cout << "Ciencia da Computacao\n";

    return 0;
}