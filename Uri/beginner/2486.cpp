// https://www.beecrowd.com.br/judge/en/problems/view/2486

#include <iostream>

using namespace std;

int main() {
    int T, N, cIntake;
    string food, aux;

    while (true) {
        cin >> T;

        if (T == 0) 
            break;
        
        cIntake = 0;
        for (int i = 0; i < T; i++) {
            cin >> N;
            getchar();
            cin >> food;
            getline(cin, aux);
            
            if (food == "suco")
                cIntake += N * 120;
            else if (food == "morango")
                cIntake += N * 85;
            else if (food == "mamao")
                cIntake += N * 85;
            else if (food == "goiaba")
                cIntake += N * 70;
            else if (food == "manga")
                cIntake += N * 56;
            else if (food == "laranja")
                cIntake += N * 50;
            else if (food == "brocolis")
                cIntake += N * 34;
        }

        if (cIntake < 110) 
            cout << "Mais " << 110 - cIntake << " mg\n";
        else if (cIntake > 130)
            cout << "Menos " << cIntake - 130 << " mg\n";  
        else
            cout << cIntake << " mg\n";
    }
    return 0;
}