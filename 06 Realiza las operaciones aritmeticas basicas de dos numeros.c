#include <stdio.h>

int main() {
    float num1, num2;

    printf("Sistema de operaciones basicas\n");
    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    printf("\nEl resultado de la suma es: %.4f\n", num1 + num2);
    printf("El resultado de la resta es: %.4f\n", num1 - num2);
    printf("El resultado de la multiplicacion es: %.4f\n", num1 * num2);

    if (num2 != 0)
        printf("El resultado de la division es: %.4f\n", num1 / num2);
    else
        printf("El resultado de la division es: No se puede dividir entre cero\n");

    return 0;
}
