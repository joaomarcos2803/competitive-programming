// https://www.beecrowd.com.br/judge/en/problems/view/1131

#include <iostream>

using namespace std;

int main() {
    int goalsInter, goalsGremio, X;
    int victoriesInter = 0, victoriesGremio = 0, draws = 0;
    int grenais = 0;

    while (true) {
        cin >> goalsInter >> goalsGremio;
        
        if (goalsInter == goalsGremio) {
            draws++;
            grenais++;
        }
        else if (goalsInter > goalsGremio) {
            victoriesInter++;
            grenais++;
        }
        else {
            victoriesGremio++;
            grenais++;
        }
        
        while (true) {
            cout << "Novo grenal (1-sim 2-nao)\n";
            cin >> X;

            if (X == 1 || X == 2) {
                break;
            }
        }
        if (X == 2) {
            break;
        }
    }
    cout << grenais << " grenais\n";
    cout << "Inter:" << victoriesInter << endl;
    cout << "Gremio:" << victoriesGremio << endl;
    cout << "Empates:" << draws << endl;

    if (victoriesInter > victoriesGremio) {
        cout << "Inter venceu mais\n";
    }
    else if (victoriesGremio > victoriesInter) {
        cout << "Gremio venceu mais\n";
    }
    else {
        cout << "Não houve vencedor\n";
    }
    return 0;
}