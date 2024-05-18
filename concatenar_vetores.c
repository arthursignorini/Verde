#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int vet1[n];
    int vet2[m];
    int vet3[n + m];

    // Leitura dos elementos de vet1
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet1[i]);
    }

    // Leitura dos elementos de vet2
    for (int i = 0; i < m; i++) {
        scanf("%d", &vet2[i]);
    }

    // Copiando vet1 para vet3
    for (int i = 0; i < n; i++) {
        vet3[i] = vet1[i];
    }

    // Copiando vet2 para vet3 a partir da posição n
    for (int i = 0; i < m; i++) {
        vet3[n + i] = vet2[i];
    }

    // Imprimindo vet1
    for (int i = 0; i < n; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\n");

    // Imprimindo vet2
    for (int i = 0; i < m; i++) {
        printf("%d ", vet2[i]);
    }
    printf("\n");

    // Imprimindo vet3
    for (int i = 0; i < n + m; i++) {
        printf("%d ", vet3[i]);
    }
    printf("\n");

    return 0;
}
