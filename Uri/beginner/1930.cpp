// https://www.beecrowd.com.br/judge/en/problems/view/1930

#include <iostream>

using namespace std;

int main() {
    int T1, T2, T3, T4, maximumNumberDevices;

    cin >> T1 >> T2 >> T3 >> T4;

    maximumNumberDevices = T1 + T2 + T3 + T4 - 3;

    cout << maximumNumberDevices << endl;
    
    return 0;
}