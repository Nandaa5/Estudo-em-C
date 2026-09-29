#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "abacaxi";
    char b[20] = "bola";
    char c[20] = "abacaxi";

    // Strings iguais retornam 0
    if (strcmp(a, c) == 0) {
        printf("'a' e 'c' sao iguais!\n");
    }

    // Retorno de comparacao lexicografica
    printf("Comparando 'a' com 'b': %d (negativo porque 'a' vem antes de 'b')\n", strcmp(a, b));
    printf("Comparando 'b' com 'a': %d (positivo porque 'b' vem depois de 'a')\n", strcmp(b, a));

    return 0;
}