// https://www.beecrowd.com.br/judge/en/problems/view/1116

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N , X, Y;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> X >> Y;
            
        if(Y == 0) {
            cout << "divisao impossivel\n";
        }
        else {
            cout << fixed << setprecision(1) << (double)X/(double)Y << endl;
        }
    }        
    return 0;
}