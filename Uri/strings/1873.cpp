// https://www.beecrowd.com.br/judge/en/problems/view/1873

#include <iostream>

using namespace std;

int main() {
    int C, i;
    string rajesh, sheldon;

    cin >> C;

    for (i = 0; i < C; i++) {
        cin >> rajesh >> sheldon;

        if (rajesh == "tesoura" && sheldon == "papel") 
            cout << "rajesh" << endl;
        else if (rajesh == "papel" && sheldon == "tesoura") 
            cout << "sheldon" << endl;
        else if (rajesh == "papel" && sheldon == "pedra")
            cout << "rajesh" << endl;
        else if (rajesh == "pedra" && sheldon == "papel")
            cout << "sheldon" << endl;
        else if (rajesh == "pedra" && sheldon == "lagarto") 
            cout << "rajesh" << endl;
        else if (rajesh == "lagarto" && sheldon == "pedra")
            cout << "sheldon" << endl;
        else if (rajesh == "lagarto" && sheldon == "spock")
            cout << "rajesh" << endl;
        else if (rajesh == "spock" && sheldon == "lagarto")
            cout << "sheldon" << endl;
        else if (rajesh == "spock" && sheldon == "tesoura")
            cout << "rajesh" << endl;
        else if (rajesh == "tesoura" && sheldon == "spock")
            cout << "sheldon" << endl;
        else if (rajesh == "tesoura" && sheldon == "lagarto")
            cout << "rajesh" << endl;
        else if (rajesh == "lagarto" && sheldon == "tesoura") 
            cout << "sheldon" << endl;
        else if (rajesh == "lagarto" && sheldon == "papel") 
            cout << "rajesh" << endl;
        else if (rajesh == "papel" && sheldon == "lagarto")
            cout << "sheldon" << endl;
        else if (rajesh == "papel" && sheldon == "spock") 
            cout << "rajesh" << endl;
        else if (rajesh == "spock" && sheldon == "papel")
            cout << "sheldon" << endl;
        else if (rajesh == "spock" && sheldon == "pedra")
            cout << "rajesh" << endl;
        else if (rajesh == "pedra" && sheldon == "spock")
            cout << "sheldon" << endl;
        else if (rajesh == "pedra" && sheldon == "tesoura")
            cout << "rajesh" << endl;
        else if (rajesh == "tesoura" && sheldon == "pedra")
            cout << "sheldon" << endl;
        else 
            cout << "empate" << endl;
    }
    return 0;
}
