// https://www.beecrowd.com.br/judge/en/problems/view/1973

#include <iostream>

using namespace std;

int main() {
    long long int N, i;
    long long int sumSheeps = 0, sumStars = 0;

    cin >> N;

    int sheep[N], star[N];

    for (i = 0; i < N; i++) {
        cin >> sheep[i];
        star[i] = 0;
    }
    i = 0;
    while (true) {
        if(i == 0 && sheep[i] % 2 == 0) {
            star[i] = 1;
            if(sheep[i] > 0)
                sheep[i]--;
            break;
        }
        else if(i == N - 1 && sheep[i] % 2 != 0) {
            star[i] = 1;
            if(sheep[i] > 0)
                sheep[i]--;
            break;
        }
        else if (sheep[i] % 2 == 0) {
            star[i] = 1;

            if (sheep[i] > 0) 
                sheep[i]--;
            i--;
        }
        else if (sheep[i] % 2 != 0) {
            star[i] = 1;

            if (sheep[i] > 0) 
                sheep[i]--;
            i++;
        } 
    }
    for(i = 0; i < N; i++) {
        sumSheeps += sheep[i];
        sumStars += star[i];
    }
    
    cout << sumStars << " " << sumSheeps << endl;

    return 0;
}