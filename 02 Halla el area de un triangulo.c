#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Sistema de calculo de area de un triangulo\n");
    printf("Ingrese la base: ");
    scanf("%f", &base);
    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2.0f;

    printf("El area del triangulo es: %.4f\n", area);
    return 0;
}
