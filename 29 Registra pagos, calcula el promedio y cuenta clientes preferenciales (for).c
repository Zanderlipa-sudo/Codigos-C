#include <stdio.h>

int main() {
    double suma = 0, pago, prom;
    int clientesPreferenciales = 0, i;

    printf("REGISTRO DE CLIENTES\n");

    for (i = 1; i <= 8; i++) {
        printf("Ingrese el monto de pago %d: \n", i);
        scanf("%lf", &pago);
        suma += pago;
        if (pago > 100)
            clientesPreferenciales++;
    }

    prom = suma / 8;

    printf("Total acumulado en caja: S/.%.2f\n", suma);
    printf("El promedio de consumo es: S/.%.2f\n", prom);
    printf("Cantidad total de clientes preferenciales: %d\n", clientesPreferenciales);
    return 0;
}
