// https://www.beecrowd.com.br/judge/en/problems/view/1864

#include <iostream>

using namespace std;

int main() {
    int N;
    char x[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cout << x[i];
    }
    cout << endl;
    
    return 0;
}