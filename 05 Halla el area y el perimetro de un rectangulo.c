#include <stdio.h>

int main() {
    double base, altura, area, perimetro;

    printf("Ingrese la base del rectangulo: ");
    scanf("%lf", &base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2.0 * (base + altura);

    printf("El area del rectangulo es: %.4f\n", area);
    printf("El perimetro del rectangulo es: %.4f\n", perimetro);
    return 0;
}
