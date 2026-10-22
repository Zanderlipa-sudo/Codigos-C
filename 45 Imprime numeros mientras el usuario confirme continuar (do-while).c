#include <stdio.h>

int main() {
    int i = 1;
    char respuesta;

    do {
        printf("Numero: %d\n", i);
        i++;
        printf("Desea imprimir el siguiente numero? (s/n): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 'S' || respuesta == 's');

    return 0;
}
