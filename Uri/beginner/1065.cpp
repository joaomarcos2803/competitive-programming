// https://www.beecrowd.com.br/judge/en/problems/view/1065

#include <iostream>

using namespace std;

int main() {
    int number, evenNumbers = 0;

    for (int i = 0; i < 5; i++) {
        cin >> number;

        if (number % 2 == 0)
            evenNumbers++;

    }
    cout << evenNumbers << " valores pares\n";
    
    return 0;
}