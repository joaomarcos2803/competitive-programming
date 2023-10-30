// https://www.beecrowd.com.br/judge/en/problems/view/2626

#include <iostream>

using namespace std;

int main() {
    string playDodo, playLeo, playPepper;

    while (cin >> playDodo >> playLeo >> playPepper) {
        if (playDodo == "papel" && playLeo == "pedra" && playPepper == "pedra" 
        || playDodo == "tesoura" && playLeo == "papel" && playPepper == "papel" 
        || playDodo == "pedra" && playLeo == "tesoura" && playPepper == "tesoura")
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
        else if (playLeo == "papel" && playDodo == "pedra" && playPepper == "pedra" 
        || playLeo == "tesoura" && playDodo == "papel" && playPepper == "papel" 
        || playLeo == "pedra" && playDodo == "tesoura" && playPepper == "tesoura")
            cout << "Iron Maiden's gonna get you, no matter how far!\n";
        else if (playPepper == "papel" && playDodo == "pedra" && playLeo == "pedra" 
        || playPepper == "tesoura" && playDodo == "papel" && playLeo == "papel" 
        || playPepper == "pedra" && playDodo == "tesoura" && playLeo == "tesoura")
             cout << "Urano perdeu algo muito precioso...\n"; 
        else 
            cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
    }
    return 0;
}