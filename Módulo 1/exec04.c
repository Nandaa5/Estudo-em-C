#include <stdio.h>

int main() {
    int x = 12;
    float pi = 3.141592;

    printf("Alinhado à direita (8 casas): [%8d]\n", x);
    printf("Alinhado à esquerda (8 casas): [%-8d]\n", x);
    printf("Preenchido com zeros: [%08d]\n", x);
    printf("Float com 2 casas: [%.2f]\n", pi);

    return 0;
}