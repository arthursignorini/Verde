#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    int pontos[2 * N];
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &pontos[i]);
    }

    bool coberto[N + 1];
    for (int i = 0; i <= N; i++) {
        coberto[i] = false;
    }

    int total_cobertos = 0;
    for (int i = 0; i < 2 * N; i++) {
        if (!coberto[pontos[i]]) {
            coberto[pontos[i]] = true;
            total_cobertos++;
        }
        if (total_cobertos == N) {
            printf("%d\n", i + 1);
            return 0;
        }
    }

    printf("0\n");
    return 0;
}
