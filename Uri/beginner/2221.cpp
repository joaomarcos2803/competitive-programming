// https://www.beecrowd.com.br/judge/en/problems/view/2221

#include <iostream>

using namespace std;

int main() {
    int T, B, AiDabriel, DiDabriel, LiDabriel, AiGuarte, DiGuarte, LiGuarte;
    double valueDabriel, valueGuarte;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> B;
        cin >> AiDabriel >> DiDabriel >> LiDabriel;
        cin >> AiGuarte >> DiGuarte >> LiGuarte;

        valueDabriel = double (AiDabriel + DiDabriel) / 2;
        valueGuarte = double (AiGuarte + DiGuarte) / 2;

        if (LiDabriel % 2 == 0)
            valueDabriel += B;
        if (LiGuarte % 2 == 0)
            valueGuarte += B;
        
        if (valueDabriel > valueGuarte)
            cout << "Dabriel\n";
        else if (valueDabriel < valueGuarte)
            cout << "Guarte\n";
        else
            cout << "Empate\n";
    }
    return 0;
}