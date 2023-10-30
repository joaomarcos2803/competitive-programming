// https://www.beecrowd.com.br/judge/en/problems/view/2753

#include <iostream>

using namespace std;

int main() {
    int number = 97;
    char letter = 'a';

    for (int i = number; i < 123; i++, letter++) {
        printf("%d e %c\n", i, letter);
    }
    return 0;
}