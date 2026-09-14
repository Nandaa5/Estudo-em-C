#include <stdio.h>

int func_comum() {
    int count = 0; // recriada e zerada a cada chamada
    count++;
    return count;
}

int func_estatica() {
    static int count = 0; // inicializada apenas uma vez; persiste na memória
    count++;
    return count;
}

int main() {
    printf("Comum: %d, %d\n", func_comum(), func_comum());       // Saída: 1, 1
    printf("Estática: %d, %d\n", func_estatica(), func_estatica()); // Saída: 1, 2
    return 0;
}
