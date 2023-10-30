// https://www.beecrowd.com.br/judge/en/problems/view/1147

#include <iostream>
#include <string.h>

using namespace std;

int getLine(int line) {
    if (line == 1)
        return 7;
    else if (line == 2)
        return 6;
    else if (line == 3)
        return 5;
    else if (line == 4)
        return 4;
    else if (line == 5)
        return 3;
    else if (line == 6)
        return 2;
    else if (line == 7)
        return 1;
    else if (line == 8)
        return 0;
}

int getColumn(char letter) {
    if (letter == 'a')
        return 0;
    else if (letter == 'b')
        return 1;
    else if (letter == 'c')
        return 2;
    else if (letter == 'd')
        return 3;
    else if (letter == 'e')
        return 4;
    else if (letter == 'f')
        return 5;
    else if (letter == 'g')
        return 6;
    else if (letter == 'h')
        return 7;
}

int main() {
    char aux;
    int knightLine, knightColumn, pawnLine, pawnColumn;
    int i, j, movements, count = 0, line;
    int pawns[8][2], knightPositions[2];

    cin >> line >> aux;

    while (line) {
        knightLine = getLine(line);
        knightColumn = getColumn(aux);

        for (i = 0; i < 8; i++) {
            cin >> line >> aux;

            pawnLine = getLine(line);
            pawnColumn = getColumn(aux);
            pawns[i][0] = pawnLine;
            pawns[i][1] = pawnColumn;
        }
        int knightMoves[8][2] = {{-2, -1}, {-2, 1}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}, {-1, 2}, {1, 2}};
        movements = 8;

        for (i = 0; i < 8; i++) {
            knightPositions[0] = knightMoves[i][0] + knightLine;
            knightPositions[1] = knightMoves[i][1] + knightColumn;

            if (knightPositions[0] < 0 || knightPositions[0] > 7 ||
            knightPositions[1] < 0 || knightPositions[1] > 7)
                movements--;
            else {
                for (j = 0; j < 8; j++) {
                     if (knightPositions[0] == pawns[j][0] + 1 &&
                        (knightPositions[1] == pawns[j][1] - 1 ||
                         knightPositions[1] == pawns[j][1] + 1))
                            movements--;
                }
            }
        }
        count++;
        cout << "Caso de Teste #" << count << ": " << movements << " movimento(s).\n";
        cin >> line >> aux;
    }
    return 0;
}