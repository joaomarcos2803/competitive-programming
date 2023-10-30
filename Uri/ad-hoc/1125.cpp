// https://www.beecrowd.com.br/judge/en/problems/view/1125

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

typedef struct {
    int id;
    int score;
}Pilot;

int comp(Pilot p1, Pilot p2) {
    if (p1.score == p2.score) {
        if (p1.id < p2.id) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else if (p1.score > p2.score) {
        return 1;
    }
    else    
        return 0;
}

int main() {
    int G, P, S, a, i, j, k;
    int run[101][101], pontuation[101], pos;
    Pilot pilot[101];

    cin >> G >> P;

    while (G || P) { 
        for (i = 0; i < G; i++) {
            for (j = 0; j < P; j++) {
                cin >> run[i][j];
            }
        }
        cin >> S;

        for (a = 0; a < S; a++) {
            cin >> k;

            for (i = 0; i < P; i++) {
                pilot[i].id = i + 1;
                pilot[i].score = 0;
            }
            memset(pontuation, 0, sizeof(pontuation));

            for (i = 0; i < k; i++) {
                cin >> pontuation[i];
            }

            for (i = 0; i < G; i++) {
                for (j = 0; j < P; j++) {
                    pos = run[i][j];
                    pilot[j].score += pontuation[pos-1];
                }
            }
            sort(pilot, pilot + P, comp);
            
            cout << pilot[0].id;

            i = 1;
            while (pilot[i].score == pilot[0].score) {
                cout << " " << pilot[i].id;
                i++;
            }
            cout << endl;
        }   
        cin >> G >> P;
    }
    return 0;
}