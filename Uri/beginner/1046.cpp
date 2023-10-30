// https://www.beecrowd.com.br/judge/en/problems/view/1046

#include <iostream>

using namespace std;

int main() {
    int start, end, totalTime;
    
    cin >> start >> end;

    if (end > start)
        totalTime = end - start;
    else 
        totalTime = 24 - start + end;
    
    cout << "O JOGO DUROU " << totalTime << " HORA(S)\n";

    return 0;
}