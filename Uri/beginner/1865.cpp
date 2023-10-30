// https://www.beecrowd.com.br/judge/en/problems/view/1865

#include <iostream>

using namespace std;

int main() {
    int C, N;
    string name;
    
    cin >> C;

    for (int i = 0; i < C; i++) {
        cin >> name >> N;

        if (name == "Thor")
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}