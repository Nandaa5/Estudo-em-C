#include <stdio.h>

// Exemplo recursivo com caso base
void contagem_regressiva(int n) {
    if (n == 0) {
        printf("FIM!\n");
        return;
    }
    printf("%d... ", n);
    contagem_regressiva(n - 1);
}

// Exemplo de troca de valores usando referência (swap do slide)
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("--- Teste de Recursao ---\n");
    contagem_regressiva(3);

    printf("\n--- Teste de Referencia (Swap) ---\n");
    int x = 10, y = 20;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}