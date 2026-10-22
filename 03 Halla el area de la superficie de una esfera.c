#include <stdio.h>

int main() {
    const double PI = 3.14159265358979;
    double radio, area;

    printf("Ingrese el radio de la esfera: ");
    scanf("%lf", &radio);

    area = 4.0 * PI * radio * radio;

    printf("El area de la esfera es: %.4f\n", area);
    return 0;
}
