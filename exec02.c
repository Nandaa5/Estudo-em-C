#include <stdio.h>

int main() {
    int c = -10;
    // Como %u lê os bits como unsigned, o sinal vira um número gigante (~4.29 bilhões em 32 bits)
    printf("Como signed (%%d): %d\n", c);
    printf("Como unsigned (%%u): %u\n", c);
    return 0;
}