#include <stdio.h>

int main() {
    int n1, n2;
    float f1, f2;

    // Soma inteiros
    printf("Digite dois inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("Soma inteira: %d\n", n1 + n2);

    // Soma ponto flutuante
    printf("Digite dois números decimais: ");
    scanf("%f %f", &f1, &f2);
    printf("Soma float: %.2f\n", f1 + f2);

    return 0;
}