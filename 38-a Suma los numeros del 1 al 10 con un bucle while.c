#include <stdio.h>

int main() {
    int contador = 1, suma = 0;

    while (contador <= 10) {
        printf("Numero: %d\n", contador);
        suma += contador;
        contador++;
    }

    printf("La suma total es: %d\n", suma);
    return 0;
}
