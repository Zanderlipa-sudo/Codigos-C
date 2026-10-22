#include <stdio.h>

int main() {
    float peso, estatura, imc;
    int opcionRango;

    printf("=== CALCULADORA DE INDICE DE MASA CORPORAL ===\n");
    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese su estatura en metros: ");
    scanf("%f", &estatura);

    if (peso <= 0 || estatura <= 0) {
        printf("ERROR: El peso y la estatura deben ser mayores a 0.\n");
        return 1;
    }

    imc = peso / (estatura * estatura);
    printf("Su IMC es: %.2f\n", imc);

    if (imc < 18.5f)                      opcionRango = 1;
    else if (imc <= 24.9f)                opcionRango = 2;
    else if (imc <= 29.9f)                opcionRango = 3;
    else if (imc <= 34.9f)                opcionRango = 4;
    else                                  opcionRango = 5;

    switch (opcionRango) {
        case 1: printf("Bajo peso\n");           break;
        case 2: printf("Peso Normal\n");         break;
        case 3: printf("Sobrepeso\n");           break;
        case 4: printf("Obesidad grado I\n");    break;
        case 5: printf("Obesidad de grado II\n");break;
    }

    return 0;
}
