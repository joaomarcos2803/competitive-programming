// https://www.beecrowd.com.br/judge/en/problems/view/1193

#include <iostream>
#include <algorithm>

using namespace std;

//stoi: funcao utilizada para converter uma string do numero em uma determinada base
//para um inteiro na base decimal

string convertToBin(int num) {
    string str;
    
    while (num != 0) {
        str += num % 2 + '0';
        num = num / 2;
    }
    reverse(str.begin(), str.end());
    return str;
}

string convertToHex(int num) {
    string str;
    
    while (num != 0) {
        if (num % 16 < 10) {
            str += num % 16 + '0';
        }
        else {
            str += (num % 16 - 10) + 'a';
        }
        num = num / 16;
    }
    reverse(str.begin(), str.end());
    return str; 
}

void bin(string x, int num) {
    cout << num << " dec" << endl;
    cout << convertToHex(num) << " hex" << endl;
}

void hex(string x, int num) {
    cout << num << " dec" << endl;
    cout << convertToBin(num) << " bin" << endl;
}

void dec(string x, int num) {
    cout << convertToHex(num) << " hex" << endl;
    cout << convertToBin(num) << " bin" << endl;
}

int main() {
    int n, i, count, num;
    string x;
    string base;

    cin >> n;
    
    count = 1;
    for (i = 0; i < n; i++) {
        cin >> x >> base;

        cout << "Case " << count << ":" << endl;
        count++;

        if (base == "bin") {
            num = stoi(x, 0, 2);
            bin(x, num);
        }
        else if (base == "dec") {
            num = stoi(x, 0, 10);
            dec(x, num);
        }
        else if (base == "hex") {
            num = stoi(x, 0, 16);
            hex(x, num);
        }
        cout << endl;
    }   
    return 0;
}