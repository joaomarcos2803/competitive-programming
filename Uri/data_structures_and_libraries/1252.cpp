// https://www.beecrowd.com.br/judge/en/problems/view/1252

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct {
    int number;
    int modulo;
    int OddOrEven; //0 impar e 1 par
}Number;

int comp(Number n1, Number n2) {
    if (n1.modulo == n2.modulo) {
        if(n1.OddOrEven == 1 && n2.OddOrEven == 0 || n1.OddOrEven == 0 && n2.OddOrEven == 1) {
            if (n1.OddOrEven == 1) {
                return 0;
            }
            else {
                return 1;
            }
        }
        else if (n1.OddOrEven == 0 && n2.OddOrEven == 0) {
            if(n1.number < n2.number) {
                return 0;
            }
            else {
                return 1;
            }
        }
        else if (n1.OddOrEven == 1 && n2.OddOrEven == 1) {
            if(n1.number < n2.number) {
                return 1;
            }
            else {
                return 0;
            }
        }
    }
    else {
        if (n1.modulo < n2.modulo) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int main() {
    int n, m, i, j, num;
    Number numbers[10001];
    string str, aux;

    cin >> n >> m;
    cout << n << " " << m << endl;

    while (n || m) {
        for (i = 0; i < n; i++) {
            cin >> num;
            
            numbers[i].number = num;
            numbers[i].modulo = num % m;

            if (num % 2 == 0) {
                numbers[i].OddOrEven = 1;
            }
            else {
                numbers[i].OddOrEven = 0;
            }
        }
        sort(numbers, numbers + n, comp);

        for (i = 0; i < n; i++) {
            cout << numbers[i].number << endl;
        }
        cin >> n >> m; 
        cout << n << " " << m << endl;
    }
    return 0;
}