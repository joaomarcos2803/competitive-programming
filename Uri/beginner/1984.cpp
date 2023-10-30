// https://www.beecrowd.com.br/judge/en/problems/view/1984

#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;

    cin >> number;

    for(int i = number.length() - 1; i >= 0; i--) {
        cout<< number[i];
    }
    cout << endl;
    
    return 0;
}