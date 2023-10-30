// https://www.beecrowd.com.br/judge/en/problems/view/2630

#include <iostream>

using namespace std;

int main() {
    int T, R, G, B, P;
    string str;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> str;
        cin >> R >> G >> B;

        if (str == "min") 
            P = min(min(R, G), B);
        else if (str == "max") 
            P = max(max(R, G), B);
        else if (str == "mean") 
            P = (R + G + B) / 3;
        else
            P = 0.30 * R + 0.59 * G + 0.11 * B;
        
        cout << "Caso #" << i + 1 << ": " << P << endl;
    }   
    return 0;
}