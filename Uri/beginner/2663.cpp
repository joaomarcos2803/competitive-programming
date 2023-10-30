// https://www.beecrowd.com.br/judge/en/problems/view/2663

#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int N, K, classificados = 0;
    int i;

    cin >> N >> K;
    
    int pontuacaoCompetidores[N];

    for (i = 0; i < N; i++) {
        cin >> pontuacaoCompetidores[i];
    }

    sort(pontuacaoCompetidores, pontuacaoCompetidores + N, compare);

    classificados += K;
    i = K;

    while (pontuacaoCompetidores[i] == pontuacaoCompetidores[K-1]) {
        classificados++;
        i++;
    }

    cout << classificados << endl;

    return 0;
}