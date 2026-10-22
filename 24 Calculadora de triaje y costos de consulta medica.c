#include <stdio.h>

int main() {
    int edad, tipoServicio, horarioNocturno = 0;
    double costoServicio = 0.0, descuentoAdultoMayor = 0.0;
    double recargoNocturno = 0.0, totalPagar;

    printf("CALCULADORA DE TRIAJE Y COSTOS DE CONSULTA MEDICA\n");
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad <= 0) {
        printf("ERROR, la edad debe ser un valor positivo\n");
        return 1;
    }

    printf("Es horario de emergencia nocturna? (1 = Si, 0 = No): ");
    scanf("%d", &horarioNocturno);

    printf("Seleccione el tipo de servicio\n");
    printf("1: Medicina General ($30.00)\n");
    printf("2: Pediatria ($45.00)\n");
    printf("3: Cardiologia ($70.00)\n");
    printf("4: Traumatologia ($60.00)\n");
    printf("OPCION: ");
    scanf("%d", &tipoServicio);

    switch (tipoServicio) {
        case 1: costoServicio = 30.00; break;
        case 2: costoServicio = 45.00; break;
        case 3: costoServicio = 70.00; break;
        case 4: costoServicio = 60.00; break;
        default:
            printf("ERROR: Opcion del servicio no valida\n");
            return 1;
    }

    if (tipoServicio == 2 && edad >= 18)
        printf("El paciente tiene 18 anos o mas, debe ser atendido en Medicina General.\n");

    if (edad >= 65)
        descuentoAdultoMayor = costoServicio * 0.25;

    if (horarioNocturno == 1)
        recargoNocturno = costoServicio * 0.20;

    totalPagar = (costoServicio - descuentoAdultoMayor) + recargoNocturno;

    printf("Costo del servicio: $%.2f\n", costoServicio);
    printf("Descuento aplicado: $%.2f\n", descuentoAdultoMayor);
    printf("Recargo nocturno: $%.2f\n", recargoNocturno);
    printf("Monto final a pagar: $%.2f\n", totalPagar);
    return 0;
}
