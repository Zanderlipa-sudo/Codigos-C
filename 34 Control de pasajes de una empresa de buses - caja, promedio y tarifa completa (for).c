#include <stdio.h>

int main() {
    double suma = 0, pago, prom;
    int tarifaCompleta = 0, i;

    printf("EMPRESA DE BUSES RAPIDO DEL SUR\n");
    printf("CONTROL DE PASAJES\n");

    for (i = 1; i <= 10; i++) {
        printf("Ingrese el monto pagado por el pasajero %d: ", i);
        scanf("%lf", &pago);
        suma += pago;
        if (pago == 15)
            tarifaCompleta++;
    }

    prom = suma / 10;

    printf("\n--- Resumen del viaje ---\n");
    printf("Dinero total acumulado en caja: S/.%.2f\n", suma);
    printf("Costo promedio pagado por pasajero: S/.%.2f\n", prom);
    printf("Cantidad total de pasajeros con tarifa completa: %d\n", tarifaCompleta);
    return 0;
}
