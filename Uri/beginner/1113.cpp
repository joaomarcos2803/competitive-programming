// https://www.beecrowd.com.br/judge/en/problems/view/1113

#include <iostream>

using namespace std;

int main() {
    int number1, number2;

    while (true) {
        cin >> number1 >> number2;

        if (number1 == number2)
            break;
        
        if (number1 < number2) {
            cout << "Crescente\n";
        }
        else {
            cout << "Decrescente\n";
        }
    }
    return 0;
}