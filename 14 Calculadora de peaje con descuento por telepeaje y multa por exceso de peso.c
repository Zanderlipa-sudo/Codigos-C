#include <stdio.h>

int main() {
    double pesoV, costoCategoria = 0.0, descuentoTelepeaje = 0.0;
    double multaPeso = 0.0, totalPagar;
    int categoria, paseTelepeaje = 0;

    printf("CALCULADORA DE PEAJE Y EXCESO DE CARGA\n");
    printf("Ingrese el peso total del vehiculo en toneladas: ");
    scanf("%lf", &pesoV);

    if (pesoV <= 0) {
        printf("ERROR, el peso del vehiculo debe ser un valor positivo\n");
        return 1;
    }

    printf("Cuenta con pase electronico de telepeaje (1 = Si, 0 = No): ");
    scanf("%d", &paseTelepeaje);

    printf("Seleccione la categoria del vehiculo\n");
    printf("1: Auto / camioneta ($3.00)\n");
    printf("2: Autobus ($6.00)\n");
    printf("3: Camion de carga ($10.00)\n");
    printf("OPCION: ");
    scanf("%d", &categoria);

    switch (categoria) {
        case 1: costoCategoria = 3.00;  break;
        case 2: costoCategoria = 6.00;  break;
        case 3: costoCategoria = 10.00; break;
        default:
            printf("ERROR: Opcion de categoria no valida\n");
            return 1;
    }

    if (categoria == 3 && pesoV >= 12)
        multaPeso = (pesoV - 12) * 2.5;

    if (paseTelepeaje == 1)
        descuentoTelepeaje = costoCategoria * 0.15;

    totalPagar = (costoCategoria - descuentoTelepeaje) + multaPeso;

    printf("--------------- Desglose ---------------\n");
    printf("Costo base de la categoria: $%.2f\n", costoCategoria);
    printf("Descuento aplicado por pase de Telepeaje: $%.2f\n", descuentoTelepeaje);
    printf("Penalizacion por exceso de peso: $%.2f\n", multaPeso);
    printf("Monto final a pagar: $%.2f\n", totalPagar);
    return 0;
}
