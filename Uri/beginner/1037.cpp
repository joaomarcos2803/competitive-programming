// https://www.beecrowd.com.br/judge/en/problems/view/1037

#include <iostream>

using namespace std;

int main() {
    double number;

    cin >> number;

    if (number < 0 || number > 100) 
        cout << "Fora de intervalo\n";
    else if (number >= 0 && number <= 25)
        cout << "Intervalo [0,25]\n";
    else if (number > 25 && number <= 50)
        cout << "Intervalo (25,50]\n";
    else if (number > 50 && number <= 75)
        cout << "Intervalo (50,75]\n";
    else if (number > 75 && number <= 100)
        cout << "Intervalo (75,100]\n";

    return 0;
}