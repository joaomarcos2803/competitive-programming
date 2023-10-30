// https://www.beecrowd.com.br/judge/en/problems/view/2764

#include <iostream>

using namespace std;

int main() {
    string data;
    getline(cin, data);
    
    cout << data[3] << data[4] << "/" << data[0] << data[1] << "/" << data[6] << data[7] << endl;
    cout << data[6] << data[7] << "/" << data[3] << data[4] << "/" << data[0] << data[1] << endl;
    cout << data[0] << data[1] << "-" << data[3] << data[4] << "-" << data[6] << data[7] << endl;
    
    return 0;
}