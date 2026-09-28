#include <stdio.h>

int main() {
    int oct = 0100; // 100 em base 8 = 64 em base 10
    int hex = 0x1A;  // 1A em hexa = 26 em base 10

    printf("Octal: %o | Decimal: %d\n", oct, oct);
    printf("Hexa minúsculo: %x | Hexa maiúsculo: %X | Decimal: %d\n", hex, hex, hex);
    return 0;
}