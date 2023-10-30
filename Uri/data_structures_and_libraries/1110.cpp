// https://www.beecrowd.com.br/judge/en/problems/view/1110

#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int>d;
    int i, n;

    cin >> n;

    while (n) {
        for (i = 1; i <= n; i++) {
            d.push_back(i);
        }

        cout << "Discarded cards: ";
        while (d.size() > 1) {
            cout << d.front();

            if (d.size() != 2)
                cout << ", ";
            else
                cout << endl;
            
            d.pop_front();
            d.push_back(d.front());
            d.pop_front();
        }
        cout << "Remaining card: " << d.front() << endl;
        d.pop_front();
        cin >> n;
    }
    return 0;
}
