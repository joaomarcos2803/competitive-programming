// https://www.beecrowd.com.br/judge/en/problems/view/1259

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int>even;
    vector<int>odd;
    vector<int>::iterator itEven;
    vector<int>::reverse_iterator itOdd;
    int N, number, i;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> number;
        if (number % 2 == 0) {
            even.push_back(number);
        }
        else {
            odd.push_back(number);
        }
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    for (itEven = even.begin(); itEven != even.end(); itEven++) {
        cout << *itEven << endl;
    }
    for (itOdd = odd.rbegin(); itOdd != odd.rend(); itOdd++) {
        cout << *itOdd << endl;
    }
    return 0;
}