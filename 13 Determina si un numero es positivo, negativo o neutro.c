#include <stdio.h>

int main() {
    float numero;

    printf("Ingrese un numero: ");
    scanf("%f", &numero);

    if (numero > 0)
        printf("El numero es positivo.\n");
    else if (numero < 0)
        printf("El numero es negativo.\n");
    else
        printf("El numero es neutro.\n");

    return 0;
}
