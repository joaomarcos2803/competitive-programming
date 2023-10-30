// https://www.beecrowd.com.br/judge/en/problems/view/2763

#include <iostream>

using namespace std;

int main() {
    int i;
    string cpf;
    
    cin >> cpf;

    for(i = 0; i < cpf.length(); i++) {
        if (isdigit(cpf[i])) {
            cout << cpf[i];
        }
        if(cpf[i] == '.' || cpf[i] == '-') {
            cout << endl;
        }
    }
    cout << endl;
    return 0;
}