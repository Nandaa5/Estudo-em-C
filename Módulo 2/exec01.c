#include <stdio.h>

void dobra(int x) {
    x = x * 2;
}

int main() {
    int num = 10;
    dobra(num);
    printf("%d\n", num);
    return 0;
}