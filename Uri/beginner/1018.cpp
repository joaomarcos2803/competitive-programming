// https://www.beecrowd.com.br/judge/en/problems/view/1018

#include <iostream>

using namespace std;

int main() {
    int bankNotes100, bankNotes50, bankNotes20, bankNotes10, bankNotes5,
    bankNotes2, bankNotes1;
    int number, aux;

    cin >> number;
    cout << number << endl;
    bankNotes100 = number / 100;
    cout << bankNotes100 << " nota(s) de R$ 100,00" << endl;
    aux = number % 100;
    bankNotes50 = aux / 50;
    cout << bankNotes50 << " nota(s) de R$ 50,00" << endl;
    aux = aux % 50;
    bankNotes20 = aux / 20;
    cout << bankNotes20 << " nota(s) de R$ 20,00" << endl;
    aux = aux % 20;
    bankNotes10 = aux / 10;
    cout << bankNotes10 << " nota(s) de R$ 10,00" << endl;
    aux = aux % 10;
    bankNotes5 = aux / 5;
    cout << bankNotes5 << " nota(s) de R$ 5,00" << endl;
    aux = aux % 5;
    bankNotes2 = aux / 2;
    cout << bankNotes2 << " nota(s) de R$ 2,00" << endl;
    aux = aux % 2;
    bankNotes1 = aux / 1;
    cout << bankNotes1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}