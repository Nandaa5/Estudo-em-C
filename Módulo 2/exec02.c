#include <stdio.h>

void dobra_real(int *x) {
    *x = (*x) * 2;
}

int main() {
    int num = 10;
    dobra_real(&num);
    printf("%d\n", num);
    return 0;
}