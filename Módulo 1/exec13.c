#include <stdio.h>

void ordena(int v[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int v[10] = {45, 12, 89, 3, 27, 64, 18, 90, 5, 33};

    ordena(v, 10);

    printf("Array ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}