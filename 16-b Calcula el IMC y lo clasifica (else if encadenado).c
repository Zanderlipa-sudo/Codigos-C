#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Error: La altura debe ser mayor a cero.\n");
        return 1;
    }

    imc = peso / (altura * altura);
    printf("Su Indice de Masa Corporal (IMC) es: %.2f\n", imc);

    if (imc < 18.5f)        printf("Clasificacion: Bajo peso\n");
    else if (imc <= 24.9f)  printf("Clasificacion: Peso normal\n");
    else if (imc <= 29.9f)  printf("Clasificacion: Sobrepeso\n");
    else if (imc <= 34.9f)  printf("Clasificacion: Obesidad Grado I\n");
    else if (imc <= 39.9f)  printf("Clasificacion: Obesidad Grado II\n");
    else                    printf("Clasificacion: Obesidad Grado III\n");

    return 0;
}
