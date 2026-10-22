#include <stdio.h>

int main() {
    int suma = 0, i;

    printf("SUMAR NUMEROS DEL 1 AL 10\n");

    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
        suma += i;
    }

    printf("La suma es: %d\n", suma);
    return 0;
}
