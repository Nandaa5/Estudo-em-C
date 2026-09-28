#include <stdio.h>

void contagem(int n) {
    if (n == 0) {
        return; // Caso base: condição de parada
    }
    printf("%d ", n);
    contagem(n - 1); // Chamada recursiva
}

int main() {
    contagem(3);
    return 0;
}