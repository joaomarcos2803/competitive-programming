// https://www.beecrowd.com.br/judge/en/problems/view/1049

#include <iostream>

using namespace std;

int main() {
    string word1, word2, word3;

    cin >> word1 >> word2 >> word3;

    if (word1 == "vertebrado" && word2 == "ave" && word3 == "carnivoro")
        cout << "aguia\n";
    if (word1 == "vertebrado" && word2 == "ave" && word3 == "onivoro")
        cout << "pomba\n";
    if (word1 == "vertebrado" && word2 == "mamifero" && word3 == "onivoro")
        cout << "homem\n";
    if (word1 == "vertebrado" && word2 == "mamifero" && word3 == "herbivoro")
        cout << "vaca\n";
    if (word1 == "invertebrado" && word2 == "inseto" && word3 == "hematofago")
        cout << "pulga\n";
    if (word1 == "invertebrado" && word2 == "inseto" && word3 == "herbivoro")
        cout << "lagarta\n";
     if (word1 == "invertebrado" && word2 == "anelideo" && word3 == "hematofago")
        cout << "sanguessuga\n";
    if (word1 == "invertebrado" && word2 == "anelideo" && word3 == "onivoro")
        cout << "minhoca\n";

    return 0;
}