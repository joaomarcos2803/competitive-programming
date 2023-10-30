// https://www.beecrowd.com.br/judge/en/problems/view/1985

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int p, productNumber, quantify;
    double total = 0;

    cin >> p;

    for (int i = 0; i < p; i++) {
        cin >> productNumber >> quantify;

        if (productNumber == 1001) 
            total += 1.50 * quantify;
        else if (productNumber == 1002) 
            total += 2.50 * quantify;
        else if (productNumber == 1003) 
            total += 3.50 * quantify;
        else if (productNumber == 1004) 
            total += 4.50 * quantify;
        else if (productNumber == 1005)
            total += 5.50 * quantify;
    } 

   cout << fixed << setprecision(2) << total << endl;
        
    return 0;
}