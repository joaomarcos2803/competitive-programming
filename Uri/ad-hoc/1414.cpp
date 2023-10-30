// https://www.beecrowd.com.br/judge/en/problems/view/1414

#include <stdio.h>

int main() {
    int i, score, sum;
    int T, N;
    char time[11];

    while (1) {
        scanf("%d %d", &T, &N);

        if (T == 0 && N == 0)
            break;

        sum = 0;

        for (i = 0; i < T; i++) {
            scanf(" %s %d", time, &score);

            sum += score;
        }

        if (score == N * 3)
            printf("0\n");
        else
            printf("%d\n", N * 3 - sum);

    }

    return 0;
}
