#include <stdio.h>

int main() {
    int a = 10, b;
    printf("Digite um divisor (digite 0 para testar o run-time error): ");
    scanf("%d", &b);

    printf("Resultado: %d\n", a / b); // Se b for 0: erro em tempo de execução
    return 0;
}