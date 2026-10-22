#include <stdio.h>
#include <math.h>

int main() {
    double ca, co, hip;

    printf("Ingrese el cateto ca: ");
    scanf("%lf", &ca);
    printf("Ingrese el cateto co: ");
    scanf("%lf", &co);

    hip = sqrt(ca * ca + co * co);

    printf("La hipotenusa es: %.4f\n", hip);
    return 0;
}
