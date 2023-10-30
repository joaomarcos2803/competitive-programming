// https://www.beecrowd.com.br/judge/en/problems/view/1094

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, i, amount = 0, total = 0;
    int rabbits = 0, rats = 0, frogs = 0;
    char type;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> amount >> type;

        total += amount;

        if (type == 'C') {
            rabbits += amount;
        }
        else if (type == 'R') {
            rats += amount;
        }
        else if (type == 'S') {
            frogs += amount;
        }
    }
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbits << endl;
    cout << "Total de ratos: " << rats << endl;
    cout << "Total de sapos: " << frogs << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << double(rabbits * 100.0/total) << " %"<< endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << double(rats * 100.0/total ) << " %"<< endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << double(frogs * 100.0/total) << " %"<< endl;

    return 0;
}