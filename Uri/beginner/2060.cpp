// https://www.beecrowd.com.br/judge/en/problems/view/2060

#include <iostream>

using namespace std;

int main() {
    int N, L;
    int multiples2 = 0, multiples3 = 0, multiples4 = 0, multiples5 = 0;

    cin >> N;    
    
    for (int i = 0; i < N; i++) {
        cin >> L;

        if (L % 2 == 0)
            multiples2++;
        if (L % 3 == 0)
            multiples3++;
        if (L % 4 == 0)
            multiples4++;
        if (L % 5 == 0)
            multiples5++;  
    }
    cout << multiples2 << " Multiplo(s) de 2\n";
    cout << multiples3 << " Multiplo(s) de 3\n";
    cout << multiples4 << " Multiplo(s) de 4\n";
    cout << multiples5 << " Multiplo(s) de 5\n";
    
    return 0;
}