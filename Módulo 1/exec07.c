#include <stdio.h>
#include <stdbool.h>

int main() {
    bool x = false;
    bool y = true;

    printf("x && y: %d\n", x && y); // 0 (E lógico)
    printf("x || y: %d\n", x || y); // 1 (OU lógico)
    printf("!x:     %d\n", !x);     // 1 (NÃO lógico)

    return 0;
}