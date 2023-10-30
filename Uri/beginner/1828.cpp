// https://www.beecrowd.com.br/judge/en/problems/view/1828

#include <iostream>

using namespace std;

int main() {
    int T, count = 0;
    string SheldonOption, RajOption;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> SheldonOption >> RajOption;

        count++;

        if (SheldonOption == RajOption) {
            cout << "Caso #" << count << ": De novo!\n";
        }
        else if (SheldonOption == "tesoura" && RajOption == "papel") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else if (SheldonOption == "papel" && RajOption == "pedra") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else if (SheldonOption == "pedra" && RajOption == "lagarto") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else if (SheldonOption == "lagarto" && RajOption == "Spock") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else if (SheldonOption == "Spock" && RajOption == "tesoura") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else if (SheldonOption == "tesoura" && RajOption == "lagarto") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else if (SheldonOption == "lagarto" && RajOption == "papel") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else if (SheldonOption == "papel" && RajOption == "Spock") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else if (SheldonOption == "Spock" && RajOption == "pedra") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else if (SheldonOption == "pedra" && RajOption == "tesoura") {
            cout << "Caso #" << count << ": Bazinga!\n"; 
        }
        else {
            cout << "Caso #" << count << ": Raj trapaceou!\n";
        }
    }
    return 0;
}