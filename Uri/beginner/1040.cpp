// https://www.beecrowd.com.br/judge/en/problems/view/1040

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n1, n2, n3, n4, examScore;
    double media;

    cin >> n1 >> n2 >> n3 >> n4;

    media = ((2 * n1) + (3 * n2) + (4 * n3) + (1 * n4)) / 10;
    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media >= 7)
        cout << "Aluno aprovado.\n";
    else if (media < 5)
        cout << "Aluno reprovado.\n";
    else {
        cout << "Aluno em exame.\n";
        cin >> examScore;
        cout << "Nota do exame: " << fixed << setprecision(1) << examScore << endl;

        media = (media + examScore) / 2;

        if (media >= 5) 
            cout << "Aluno aprovado.\n";
        else
            cout << "Aluno reprovado.\n";
        
        cout << "Media final: " << fixed << setprecision(1) << media << endl;
    }
    return 0;
}