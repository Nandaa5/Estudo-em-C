#include <stdio.h>

int main() {
    int n = 7;

    // Sintaxe: condicao ? valor_se_verdade : valor_se_falso
    (n % 2 == 0) ? printf("%d eh par\n", n) : printf("%d eh impar\n", n);

    // Também pode ser usado em atribuições diretas:
    int a = 15, b = 20;
    int maior = (a > b) ? a : b;
    printf("Maior valor: %d\n", maior);

    return 0;
}