#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("=== Resolucion de ecuaciones de segundo grado (ax^2 + bx + c = 0) ===\n");
    printf("Ingrese el coeficiente a: ");
    scanf("%lf", &a);
    printf("Ingrese el coeficiente b: ");
    scanf("%lf", &b);
    printf("Ingrese el coeficiente c: ");
    scanf("%lf", &c);

    if (a == 0) {
        /* No es una ecuacion cuadratica */
        if (b == 0) {
            if (c == 0)
                printf("\nCualquier valor de x es solucion (0 = 0).\n");
            else
                printf("\nNo tiene solucion (ecuacion inconsistente).\n");
        } else {
            printf("\nEs una ecuacion lineal. Solucion: x = %.4f\n", -c / b);
        }
        return 0;
    }

    double discriminante = b * b - 4 * a * c;
    printf("\nDiscriminante: %.4f\n", discriminante);

    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Raices reales y distintas:\n");
        printf("x1 = %.4f\n", x1);
        printf("x2 = %.4f\n", x2);
    } else if (discriminante == 0) {
        printf("Raiz real doble:\n");
        printf("x = %.4f\n", -b / (2 * a));
    } else {
        double real = -b / (2 * a);
        double imag = sqrt(-discriminante) / (2 * a);
        printf("Raices complejas conjugadas:\n");
        printf("x1 = %.4f + %.4fi\n", real, imag);
        printf("x2 = %.4f - %.4fi\n", real, imag);
    }

    return 0;
}
