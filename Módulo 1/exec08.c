#include <stdio.h>

int main() {
    int sum = 0;
    int k = 1;

    // Erro lógico: o ponto e vírgula finaliza o for aqui mesmo
    for (int i = 1; i <= 10; i++);
    {
        sum = sum + k;
        k++;
    }

    // Saída esperada sem o ';': 10 ou 55 (dependendo da lógica)
    // Saída real com o erro do slide: 1
    printf("The value of sum is %d\n", sum);
    return 0;
}