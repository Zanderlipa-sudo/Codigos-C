#include <stdio.h>

int main() {
    int filas, columnas, i, j;
    int matriz[50][50];

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    printf("Ingrese los elementos\n");
    for (i = 0; i < filas; i++)
        for (j = 0; j < columnas; j++) {
            printf("A [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }
    return 0;
}
