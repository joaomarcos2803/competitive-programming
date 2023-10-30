// https://www.beecrowd.com.br/judge/en/problems/view/1154

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int total = 0, count = 0;
    int age;

    while (true) {
        cin >> age;

        if (age > 0) {
            total += age;
            count++;
        }
        else {
            break;
        }
    }
    cout << fixed << setprecision(2) << (double) total / (double) count << endl;
    
    return 0;
}