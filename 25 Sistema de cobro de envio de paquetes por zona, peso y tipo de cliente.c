#include <stdio.h>

int main() {
    int zona, entrega, cliente;
    float peso;
    double descuentop = 0.0, recargop = 0.0, multa = 0.0, montoi;

    printf("SISTEMA DE COBRO DE ENVIO\n");
    printf("Ingrese la zona de destino\n");
    printf("\n 1: Local/Urbana($5.00)\n");
    printf("\n 2: Nacional($10.00)\n");
    printf("\n 3: America del Sur($20.00)\n");
    printf("\n 4: Internacional/Resto del mundo($35.00)\n");
    scanf("%d", &zona);

    printf("Ingrese el peso total del paquete en kilogramos\n");
    scanf("%f", &peso);

    if (peso <= 0 || peso > 50) {
        printf("ERROR: El peso del paquete no debe ser menor a cero (kg) o mayor a 50 (kg)\n");
        return 1;
    }

    printf("Tipo de entrega Express/Prioritaria (1,si o 0,no)\n");
    scanf("%d", &entrega);
    printf("Tipo de cliente: (1,Corporativo/frecuente o 0,Particular)\n");
    scanf("%d", &cliente);

    if (entrega == 1) recargop = 0.25;
    if (peso > 15)    multa = 12;
    if (cliente == 1) descuentop = 0.10;

    switch (zona) {
        case 1: montoi = 5;  break;
        case 2: montoi = 10; break;
        case 3: montoi = 20; break;
        case 4: montoi = 35; break;
        default:
            printf("ERROR: Zona del destino no valido\n");
            return 1;
    }

    double recargof = montoi * recargop;
    double montosf = montoi + recargof + multa;
    double descuentof = montosf * descuentop;
    double montof = montosf - descuentof;

    printf("\n#######################################\n\n");
    printf(" Boleta de Tarifa de envio\n");
    printf("Codigo de zona elegida: %d\n", zona);
    printf("Costo base por peso: %.2f\n", montoi);
    printf("Multas por exceso de peso: %.2f\n", multa);
    printf("Recargo express: %.2f\n", recargof);
    printf("Descuento corporativo: %.2f\n", descuentof);
    printf("Monto Final: %.2f\n", montof);
    return 0;
}
