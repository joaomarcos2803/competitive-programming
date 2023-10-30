// https://www.beecrowd.com.br/judge/en/problems/view/1789

#include <iostream>

using namespace std;

int main() {
    int L, V, highestSpeed;

    while((scanf("%d",&L)) != EOF) {
        highestSpeed = 0;
        for (int i = 0; i < L; i++) {
            cin >> V;

            if (V > highestSpeed) {
                highestSpeed = V;
            }
        }
        if (highestSpeed < 10) {
                cout << "1" << endl;
        }
        else if (highestSpeed >= 10 && highestSpeed < 20) {
            cout << "2" << endl;
        }
        else
            cout << "3" << endl;
    }
    return 0;
}