// https://www.beecrowd.com.br/judge/en/problems/view/1114

#include <iostream>

using namespace std;

int main() {
    int password;

    while (true) {
        cin >> password;

        if (password == 2002) {
            cout << "Acesso Permitido\n";
            break;
        }
        else
            cout << "Senha Invalida\n";
    }
    return 0;
}