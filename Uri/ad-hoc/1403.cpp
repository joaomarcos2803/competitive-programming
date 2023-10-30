// https://www.beecrowd.com.br/judge/en/problems/view/1403

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int score;
}Player;

int comp (const void *a, const void *b) {
    const Player *p1 = a;    
    const Player *p2 = b;

    if (p1 -> score == p2 -> score) {
        if (p1 -> id > p2 -> id)
            return 1;
        else
            return -1;
    }
    else if (p1 -> score > p2 -> score)
        return -1;
    else 
        return 1;
}

int main() {
    int n , m;
    int i, j, k;
    int position;
    Player player[10001];

    scanf("%d %d", &n, &m);

    while (n || m) {
        for (i = 0; i <= 10000; i++) {
            player[i].score = 0;
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                scanf("%d", &position);
                player[position].score++;
                player[position].id = position;
            }
        }
        qsort(player, 10001, sizeof(Player), comp);
              
        i = 1;
        while (player[i].score == player[1].score) {
            printf("%d ", player[i].id);
            i++;
        }
        printf("\n");
        
        scanf("%d %d", &n, &m);
    }
    return 0;
}