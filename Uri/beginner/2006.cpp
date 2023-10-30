// https://www.beecrowd.com.br/judge/en/problems/view/2006

#include <iostream>

using namespace std;

int main() {
    int T, A, B, C, D, E, countCorrectAnswers = 0;

    cin >> T;
    cin >> A >> B >> C >> D >> E;

    if (A == T) 
        countCorrectAnswers++;
    if (B == T)
        countCorrectAnswers++;
    if (C == T)
        countCorrectAnswers++;
    if (D == T)
        countCorrectAnswers++;
    if (E == T)
        countCorrectAnswers++;

    cout << countCorrectAnswers << endl;
        
    return 0;
}