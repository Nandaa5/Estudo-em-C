#include <stdio.h>

int main() {
    // Linhas omitidas, colunas obrigatórias
    int mat[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("mat[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }
    return 0;
}