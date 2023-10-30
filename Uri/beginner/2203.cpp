// https://www.beecrowd.com.br/judge/en/problems/view/2203

#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double x1, y1, x2, y2, v, r1, r2;
    double distance;

    while(cin >> x1 >> y1 >> x2 >> y2 >> v >> r1 >> r2) {
        distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        distance += v * 1.50;

        if (r1 + r2 >= distance) 
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }   
    return 0;
}