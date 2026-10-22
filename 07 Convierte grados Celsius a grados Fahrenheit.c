#include <stdio.h>

int main() {
    float C, F;

    printf("Sistema de conversion de grados Celsius a grados Fahrenheit\n");
    printf("Ingrese grados Celsius: ");
    scanf("%f", &C);

    F = (C * 1.8f) + 32.0f;

    printf("La conversion a grados Fahrenheit es: %.2f\n", F);
    return 0;
}
