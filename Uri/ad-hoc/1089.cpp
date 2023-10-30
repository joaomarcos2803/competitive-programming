// https://www.beecrowd.com.br/judge/en/problems/view/1089

#include <iostream>

using namespace std;

int main() {
    int n, i, count;
    int peaks[10001];

    cin >> n;

    while (n) {
        count = 0;
        for (i = 0; i < n; i++) {
            cin >> peaks[i];
        }
        //verificando picos ao longo da musica, excluindo o inicio e o fim
        for(i = 1; i < n - 1; i++) {
            if(peaks[i] < peaks[i-1] && peaks[i] < peaks[i+1]) {
                count++;
            }
            else if(peaks[i] > peaks[i-1] && peaks[i] > peaks[i+1]) {
                count++;
            }
        }
        //verificando se há picos no inicio e no fim
        if(peaks[0] > peaks[1] && peaks[0] > peaks[n-1] || peaks[0] < peaks[1] && peaks[0] < peaks[n-1]) 
            count++;
        if(peaks[n-1] > peaks[n-2] && peaks[n-1] > peaks[0] || peaks[n-1] < peaks[n-2] && peaks[n-1] < peaks[0])
            count++;

        cout << count << endl;
        
        cin >> n;
    }
    return 0;
}
