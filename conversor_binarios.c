#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int bits[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &bits[i]);
    }

    int decimal = 0;
    int base = 1;

    for (int i = N - 1; i >= 0; i--) {
        decimal += bits[i] * base;
        base *= 2;
    }

    printf("%d\n", decimal);
    return 0;
}
