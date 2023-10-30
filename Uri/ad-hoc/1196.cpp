// https://www.beecrowd.com.br/judge/en/problems/view/1196

#include <iostream>
#include <string.h>
#include <unordered_map>

using namespace std;

int main() {
    string str;
    unordered_map<char, char> map;

    map['1'] = '`';
    map['2'] = '1';
    map['3'] = '2';
    map['4'] = '3';
    map['5'] = '4';
    map['6'] = '5';
    map['7'] = '6';
    map['8'] = '7';
    map['9'] = '8';
    map['0'] = '9';
    map['-'] = '0';
    map['='] = '-';
    map['W'] = 'Q';
    map['E'] = 'W';
    map['R'] = 'E';
    map['T'] = 'R';
    map['Y'] = 'T';
    map['U'] = 'Y';
    map['T'] = 'R';
    map['I'] = 'U';
    map['O'] = 'I';
    map['P'] = 'O';
    map['['] = 'P';
    map[']'] = '[';
    map['\\'] = ']';
    map['S'] = 'A';
    map['D'] = 'S';
    map['F'] = 'D';
    map['G'] = 'F';
    map['H'] = 'G';
    map['J'] = 'H';
    map['K'] = 'J';
    map['L'] = 'K';
    map[';'] = 'L';
    map['\''] = ';';
    map['X'] = 'Z';
    map['C'] = 'X';
    map['V'] = 'C';
    map['B'] = 'V';
    map['N'] = 'B';
    map['M'] = 'N';
    map[','] = 'M';
    map['.'] = ',';
    map['/'] = '.';
    map[' '] = ' ';

    while(getline(cin, str)) {
        for (int i = 0; i < str.length(); i++)
            cout << map[str[i]];
        cout << endl;
    }
    return 0;
}
