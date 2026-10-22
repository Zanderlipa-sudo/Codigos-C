#include <stdio.h>

int main() {
    int contador = 1, sumaPar = 0, sumaImpar = 0, suma = 0;

    while (contador <= 10) {
        printf("Numero: %d\n", contador);
        if (contador % 2 != 0) sumaImpar += contador;
        else                   sumaPar += contador;
        suma += contador;
        contador++;
    }

    printf("La suma total de los numeros pares es: %d\n", sumaPar);
    printf("La suma total de los numeros impares es: %d\n", sumaImpar);
    printf("La suma total de los numeros es: %d\n", suma);
    return 0;
}
