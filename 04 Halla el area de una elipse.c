#include <stdio.h>

int main() {
    const double PI = 3.14159265358979;
    double semiejeMayor, semiejeMenor, area;

    printf("Ingrese el semieje mayor: ");
    scanf("%lf", &semiejeMayor);
    printf("Ingrese el semieje menor: ");
    scanf("%lf", &semiejeMenor);

    area = PI * semiejeMayor * semiejeMenor;

    printf("El area de la elipse es: %.4f\n", area);
    return 0;
}
