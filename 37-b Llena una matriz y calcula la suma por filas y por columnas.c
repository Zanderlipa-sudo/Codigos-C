#include <stdio.h>

int main() {
    int filas, columnas, i, j;
    int matriz[50][50];
    int sumaCol[50] = {0};

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    printf("Ingreso de elementos\n");
    for (i = 0; i < filas; i++)
        for (j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            sumaCol[j] += matriz[i][j];
        }

    printf("Matriz y suma por filas\n");
    for (i = 0; i < filas; i++) {
        int sumaFila = 0;
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
            sumaFila += matriz[i][j];
        }
        printf("| Suma fila: %d\n", sumaFila);
    }

    printf("Suma de cada columna:\n");
    for (j = 0; j < columnas; j++)
        printf("%d\t", sumaCol[j]);
    printf("\n");
    return 0;
}
