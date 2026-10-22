#include <stdio.h>

int main() {
    const double PI = 3.14159265358979;
    double radio, area;

    printf("Ingrese el radio del circulo: ");
    scanf("%lf", &radio);

    area = PI * radio * radio;

    printf("El area del circulo es: %.4f\n", area);
    return 0;
}
