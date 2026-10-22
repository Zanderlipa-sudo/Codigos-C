#include <stdio.h>

int main() {
    int notas[5] = {2, 14, 15, 18, 20};
    int i;

    printf("Hello world!\n");
    printf("ARREGLO UNIDIMENSIONAL\n");
    printf("Primera nota indice 0: %d\n", notas[0]);
    printf("Ultima nota indice 4: %d\n", notas[4]);

    printf("LISTA DE TODAS LAS NOTAS\n");
    for (i = 0; i < 5; i++)
        printf("Nota en indice: [%d] %d\n", i, notas[i]);

    return 0;
}
