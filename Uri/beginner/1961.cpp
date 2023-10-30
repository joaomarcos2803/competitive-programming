// https://www.beecrowd.com.br/judge/en/problems/view/1961

#include <iostream>

using namespace std;

int main() {
    int P, N, frogHeight, count = 0;

    cin >> P >> N;

    int pipeHeight[N];

    for (int i = 0; i < N; i++) {
        cin >> pipeHeight[i];
    }

    frogHeight = pipeHeight[0];

    for (int i = 1; i < N; i++) {
        if (abs(frogHeight - pipeHeight[i]) > P) {
            count = 1;
            break;
        } 
        frogHeight = pipeHeight[i];          
    }
        
    if (count == 1)
        cout << "GAME OVER\n";
    else
        cout << "YOU WIN\n";

    return 0;
}