#include <stdio.h>

int main() {
    char s[20] = "teste de string";
    int i = 0;
    int count = 0;

    // Percorre até achar o delimitador '\0'
    while (s[i] != '\0') {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
        i++;
    }

    printf("Texto: %s\n", s);
    printf("Numero total de caracteres percorridos: %d\n", i);
    printf("Numero de vogais: %d\n", count);

    return 0;
}