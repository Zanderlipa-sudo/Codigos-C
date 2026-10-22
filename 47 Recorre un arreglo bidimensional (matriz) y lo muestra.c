#include <stdio.h>

int main() {
    int matriz[2][3] = {{14, 15, 16}, {8, 13, 20}};
    int i, j;

    printf("ARREGLO BIDIMENSIONAL MATRIZ\n");
    printf("Notas del estudiante  %d\n", matriz[0][1]);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
    return 0;
}
