// https://www.beecrowd.com.br/judge/en/problems/view/1410

#include <iostream>

using namespace std;

int main() {
    int A, D, i;
    int attackingPlayer, defendingPlayer;
    int distanceAttack, distanceDefense1, distanceDefense2;

    cin >> A >> D;

    while(A || D) {
        distanceAttack = 10001;
        for (i = 0; i < A; i++) {
            cin >> attackingPlayer;

            if (attackingPlayer < distanceAttack) {
                distanceAttack = attackingPlayer;
            }
        }
        distanceDefense1 = 10001, distanceDefense2 = 10001;
        for (i = 0; i < D; i++) {
            cin >> defendingPlayer;

            if (defendingPlayer < distanceDefense1) {
                distanceDefense2 = distanceDefense1;
                distanceDefense1 = defendingPlayer;
            }
            else if (defendingPlayer < distanceDefense2) {
                distanceDefense2 = defendingPlayer;
            }
        }
        if (distanceAttack < distanceDefense2) 
            cout << "Y\n";
        else
            cout << "N\n";

        cin >> A >> D;
    }
    return 0;
}