#include <stdio.h>

int main() {
    char s1[30];
    char s2[30];
    char s3[30];

    // 1. scanf comum: para no primeiro espaço em branco
    printf("1. Digite um nome completo (teste scanf %%s): ");
    scanf("%s", s1);
    printf("Saida scanf: [%s]\n\n", s1);

    // Limpeza de buffer do teclado
    while (getchar() != '\n');

    // 2. scanf com [^\n]: lê até o Enter
    printf("2. Digite um nome completo (teste scanf %%[^\\n]s): ");
    scanf("%[^\n]s", s2);
    printf("Saida scanf regex: [%s]\n\n", s2);

    // Limpeza de buffer do teclado
    while (getchar() != '\n');

    // 3. fgets: forma segura que limita o tamanho
    printf("3. Digite um nome completo (teste fgets): ");
    fgets(s3, 30, stdin);
    printf("Saida fgets: [%s]\n", s3);

    return 0;
}