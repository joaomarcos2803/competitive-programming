// https://www.beecrowd.com.br/judge/en/problems/view/1160

#include <iostream>

using namespace std;

int main() {
    int T, PA, PB; 
    double GA, GB;
    int years;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> PA >> PB >> GA >> GB;

        years = 0;

        while (PB >= PA) {
            PA += PA * (GA/100);
            PB += PB * (GB/100);
            years++;

            if (years > 100) {
                break;
            }
        }
        if (years > 100) {
            cout << "Mais de 1 seculo." << endl;
        }
        else {
            cout << years << " anos." << endl;
        }
    }
    return 0;
}