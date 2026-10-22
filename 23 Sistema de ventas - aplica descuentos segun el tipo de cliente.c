#include <stdio.h>

int main() {
    double montoOriginal, descuentoPorcentaje = 0.0, descuentoAdicional = 0.0;
    double porcentajeTotal, montoDescuento, montoFinal;
    int tipodecliente;

    printf("Sistema de ventas y descuentos\n");
    printf("Ingrese el monto total de la compra S/. ");
    scanf("%lf", &montoOriginal);

    if (montoOriginal <= 0) {
        printf("ERROR, el monto debe ser un valor positivo\n");
        return 1;
    }

    printf("Seleccione el tipo de cliente\n");
    printf("1: Cliente regular\n");
    printf("2: Cliente miembro\n");
    printf("3: Cliente VIP\n");
    printf("OPCION: ");
    scanf("%d", &tipodecliente);

    switch (tipodecliente) {
        case 1: descuentoPorcentaje = 0.05; break;
        case 2: descuentoPorcentaje = 0.10; break;
        case 3: descuentoPorcentaje = 0.20; break;
        default:
            printf("ERROR: Opcion del cliente no valida\n");
            return 1;
    }

    if (montoOriginal > 200.00)
        descuentoAdicional = 0.05;

    porcentajeTotal = descuentoPorcentaje + descuentoAdicional;
    montoDescuento = montoOriginal * porcentajeTotal;
    montoFinal = montoOriginal - montoDescuento;

    printf("Monto original: S/. %.2f\n", montoOriginal);
    printf("Descuento total aplicado: %.2f%%\n", porcentajeTotal * 100);
    printf("Monto de descuento: S/. %.2f\n", montoDescuento);
    printf("Monto final a pagar: S/. %.2f\n", montoFinal);
    return 0;
}
