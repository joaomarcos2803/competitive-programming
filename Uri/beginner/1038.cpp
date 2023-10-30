// https://www.beecrowd.com.br/judge/en/problems/view/1038

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int X, Y; // X = product code, Y = quantify of this item
    double total;

    cin >> X >> Y;

    if (X == 1)
        total = 4 * Y;
    else if (X == 2)
        total = 4.5 * Y;
    else if (X == 3)
        total = 5 * Y;
    else if (X == 4)
        total = 2 * Y;
    else if (X == 5)
        total = 1.5 * Y;
    
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}