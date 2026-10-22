#include <stdio.h>

int main() {
    int noches, hues, tipohabitacion, plan;
    double costoCategoria = 0.0, descuento = 0.0;
    double multaHues = 0.0, planCom = 0.0, totalPagar, totalFinal;

    printf("TARIFICADOR DE RESERVAS DE HOTEL\n");

    printf("Ingrese el numero de noches de estadia: ");
    scanf("%d", &noches);
    if (noches <= 0) {
        printf("ERROR, el numero de noches debe ser un valor positivo\n");
        return 1;
    }

    printf("Ingrese el numero de huespedes: ");
    scanf("%d", &hues);
    if (hues < 1) {
        printf("ERROR, el numero de huespedes debe ser al menos 1\n");
        return 1;
    }

    printf("Plan de alimentacion (1 = Solo desayuno, 2 = Pension Completa): ");
    scanf("%d", &plan);
    if (plan != 1 && plan != 2) {
        printf("ERROR: plan de alimentacion no valido\n");
        return 1;
    }

    printf("Seleccione el tipo de habitacion\n");
    printf("1: Habitacion Estandar (S/.50.00 por noche)\n");
    printf("2: Habitacion Doble (S/.80.00 por noche)\n");
    printf("3: Suite Ejecutiva (S/.140.00 por noche)\n");
    printf("OPCION: ");
    scanf("%d", &tipohabitacion);

    switch (tipohabitacion) {
        case 1: costoCategoria = 50.00;  break;
        case 2: costoCategoria = 80.00;  break;
        case 3: costoCategoria = 140.00; break;
        default:
            printf("ERROR: tipo de habitacion no valida\n");
            return 1;
    }

    if (tipohabitacion == 1 && hues > 1) multaHues = (hues - 1) * 15;
    if (tipohabitacion == 2 && hues > 2) multaHues = (hues - 2) * 15;
    if (tipohabitacion == 3 && hues > 3) multaHues = (hues - 3) * 15;

    if (plan == 2) planCom = 25 * hues;

    totalPagar = ((costoCategoria + planCom) + multaHues) * noches;

    if (noches > 5) descuento = totalPagar * 0.12;
    totalFinal = totalPagar - descuento;

    printf("--------------- Desglose ---------------\n");
    if (tipohabitacion == 1) printf("Tipo de habitacion : Habitacion Estandar\n");
    if (tipohabitacion == 2) printf("Tipo de habitacion : Habitacion Doble\n");
    if (tipohabitacion == 3) printf("Tipo de habitacion : Suite Ejecutiva\n");

    printf("Subtotal de alojamiento: S/.%.2f\n", costoCategoria * noches);
    if (multaHues > 0)
        printf("Recargo por huespedes adicionales: S/.%.2f\n", multaHues * noches);
    printf("Costo de alimentacion: S/.%.2f\n", planCom * noches);

    if (noches > 5) {
        printf("Descuento por estadia larga: S/.%.2f\n", descuento);
        printf("Monto total a pagar: S/.%.2f\n", totalFinal);
    } else {
        printf("Monto total a pagar: S/.%.2f\n", totalPagar);
    }

    return 0;
}
