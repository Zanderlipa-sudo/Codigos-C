#include <stdio.h>

int main() {
    double maxP = 0, minP = 999, suma = 0, prom, p;
    int bajoP = 0, validos = 0, i;

    printf("CONTROL DE CALIDAD EN PLANTA INDUSTRIAL\n");

    for (i = 1; i <= 8; i++) {
        printf("Ingrese el peso de la botella %d: ", i);
        scanf("%lf", &p);

        if (p <= 0) {
            printf("El peso ingresado debe ser mayor a 0\n");
            continue;
        }

        suma += p;
        validos++;

        if (p > maxP) maxP = p;
        if (p < minP) minP = p;
        if (p < 490)  bajoP++;
    }

    prom = (validos > 0) ? suma / validos : 0;

    printf("Suma total de pesos: %.2f\n", suma);
    printf("Promedio de pesos: %.2f\n", prom);
    printf("Peso minimo: %.2f\n", (validos > 0) ? minP : 0);
    printf("Peso maximo: %.2f\n", maxP);
    printf("Total de botellas con bajo peso: %d\n", bajoP);
    return 0;
}
