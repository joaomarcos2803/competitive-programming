// https://www.beecrowd.com.br/judge/en/problems/view/1957

#include <iostream>

using namespace std;

int main() {
    long long int V, mod;
    string hexa;
    cin >> V;

    while(V > 0) {
        mod = V % 16;
        V = V / 16;

        if(mod < 10) {
            hexa += mod + 48;
        }
        else if(mod == 10) 
            hexa += 'A';
        else if(mod == 11) 
            hexa += 'B';
        else if(mod == 12) 
            hexa += 'C';
        else if(mod == 13) 
            hexa += 'D';
        else if(mod == 14) 
            hexa += 'E';
        else if(mod == 15) 
            hexa += 'F';
    }
        
    for (int i = hexa.length() - 1; i >= 0; i--)  
        cout << hexa[i];

    cout << endl;

    return 0;
}


    