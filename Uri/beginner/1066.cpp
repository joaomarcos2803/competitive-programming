// https://www.beecrowd.com.br/judge/en/problems/view/1066

#include <iostream>

using namespace std;

int main() {
    int number, evenNumbers = 0, oddNumbers = 0, positiveNumbers = 0, negativeNumbers = 0;

    for (int i = 0; i < 5; i++) {
        cin >> number;

        if (number % 2 == 0)
            evenNumbers++;
        else 
            oddNumbers++;

        if (number > 0)
            positiveNumbers++;
        else if (number < 0)
            negativeNumbers++;

    }
    cout << evenNumbers << " valor(es) par(es)\n";
    cout << oddNumbers << " valor(es) impar(es)\n";
    cout << positiveNumbers << " valor(es) positivo(s)\n";
    cout << negativeNumbers << " valor(es) negativo(s)\n";
    
    return 0;
}