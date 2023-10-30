// https://www.beecrowd.com.br/judge/en/problems/view/1332

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int i, n;
    string number;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> number;

        // somente o three possui 5 letras
        if (number.length() == 5) {
            cout << "3" << endl;
        }
        //somente uma letra pode estar errada
        else if (number[0] == 'o' && number[1] == 'n' || number[0] == 'o' && number[2] == 'e' ||
        number[1] == 'n' && number[2] == 'e')
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}
