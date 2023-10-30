// https://www.beecrowd.com.br/judge/en/problems/view/1042

#include <iostream>

using namespace std;

int main() {
    int a, b, c, aux;
    int array[3];

    cin >> a >> b >> c;

    array[0] = a;
    array[1] = b;
    array[2] = c;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (array[j] > array[j+1]) {
                aux = array[j+1];
                array[j+1] = array[j];
                array[j] = aux;
            }
        }
    }
    for (int i = 0; i < 3; i++)
        cout << array[i] << endl;
    
    cout << endl << a << endl << b << endl << c << endl;

    return 0;
}