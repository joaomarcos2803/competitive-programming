// https://www.beecrowd.com.br/judge/en/problems/view/1134

#include <iostream>

using namespace std;

int main() {
    int type, alcohol = 0, gasoline = 0, diesel = 0;

    while (true) {
        cin >> type;

        if (type == 4) {
            break;
        }
        else if (type == 1)
            alcohol++;
        else if (type == 2)
            gasoline++;
        else if (type == 3)
            diesel++;
    }
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}