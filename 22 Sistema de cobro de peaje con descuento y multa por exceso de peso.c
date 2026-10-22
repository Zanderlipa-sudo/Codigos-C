#include <stdio.h>

int main() {
    int vehiculo, pase;
    float peso;
    double descuentop = 0.0, multa = 0.0, montoi;

    printf("SISTEMA DE COBRO DE PEAJE\n");
    printf("Ingrese la categoria del vehiculo\n");
    printf("\n 1: Auto/Camioneta($3.00)\n");
    printf("\n 2: Autobus($6.00)\n");
    printf("\n 3: Camion de carga($10.00)\n");
    scanf("%d", &vehiculo);

    printf("Ingrese el peso total del vehiculo en toneladas\n");
    scanf("%f", &peso);

    if (peso <= 0) {
        printf("ERROR: El peso del vehiculo ingresado debe de ser mayor a cero\n");
        return 1;
    }

    printf("Cuenta con pase electronico (Telepeaje)? (1,si o 0,no)\n");
    scanf("%d", &pase);

    if (pase == 1)
        descuentop = 0.15;

    if (vehiculo == 3 && peso >= 12)
        multa = (peso - 12) * 2.5;

    switch (vehiculo) {
        case 1: montoi = 3;  break;
        case 2: montoi = 6;  break;
        case 3: montoi = 10; break;
        default:
            printf("ERROR: Codigo del servicio no valido\n");
            return 1;
    }

    double descuentof = montoi * descuentop;
    double montof = montoi - descuentof + multa;

    printf("\n Boleta de Peaje\n");
    printf("Monto Original: %.2f\n", montoi);
    printf("Descuento total: %.2f\n", descuentof);
    printf("Multas por exceso de peso: %.2f\n", multa);
    printf("Monto Final: %.2f\n", montof);
    return 0;
}
