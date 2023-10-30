// https://www.beecrowd.com.br/judge/en/problems/view/3068

#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    int n, i, x, y;
    int counter = 0, meteoros;


    while (cin >> x1 >> y1 >> x2 >> y2) {
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) 
            break;

        counter++;
        cin >> n;
        meteoros = 0;

        for (i = 0; i < n; i++) {
            cin >> x >> y;

            if (x >= x1 && x <= x2 && y >= y2 && y <= y1)
                meteoros++;
        }
        cout << "Teste " << counter << endl;
        cout << meteoros << endl;
    }
    return 0;
}