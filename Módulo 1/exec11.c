#include <stdio.h>

//  uso de static
int *getarray_static() {
    static int arr[5] = {10, 20, 30, 40, 50}; // não é destruído na pilha
    return arr;
}

int main() {
    int *ptr = getarray_static();
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    return 0;
}