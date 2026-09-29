#include <stdio.h>
#include <string.h>

int main() {
    char origem[20] = "javatpoint";
    char destino[40];

    // 1. Copiando com strcpy
    strcpy(destino, origem);
    printf("Apos strcpy - Destino: %s\n", destino);

    // 2. Tamanho com strlen (nao conta o '\0')
    printf("Tamanho (strlen): %lu\n", strlen(destino));

    // 3. Concatenando com strcat
    strcat(destino, " em C");
    printf("Apos strcat - Destino final: %s\n", destino);
    printf("Novo tamanho: %lu\n", strlen(destino));

    return 0;
}