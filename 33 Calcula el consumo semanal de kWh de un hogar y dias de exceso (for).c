#include <stdio.h>

int main() {
    double suma = 0, consumo, prom;
    int altoC = 0, i;
    const int dias = 7;

    printf("CONSUMO DE kWh UN HOGAR DURANTE 7 DIAS\n");

    for (i = 1; i <= dias; i++) {
        printf("Ingrese el consumo en kWh dia %d: \n", i);
        scanf("%lf", &consumo);
        suma += consumo;
        if (consumo > 15)
            altoC++;
    }

    prom = suma / dias;

    printf("Consumo acumulado total de la semana: %.2f\n", suma);
    printf("El promedio diario: %.2f\n", prom);
    printf("Cantidad de dias con exceso de consumo: %d\n", altoC);
    return 0;
}
