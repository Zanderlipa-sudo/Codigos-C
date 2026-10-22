#include <stdio.h>

int main() {
    double glucosa;
    int opcion;
    const char *tipoTexto, *resultado;

    printf("=== Clasificador de Glucosa en Sangre ===\n\n");
    printf("Tipo de medicion:\n");
    printf("1. En ayunas\n");
    printf("2. Aleatoria\n");
    printf("3. Postprandial (2h despues de comer)\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese el valor de glucosa (mg/dL): ");
    scanf("%lf", &glucosa);

    switch (opcion) {
        case 1:
            tipoTexto = "Ayunas";
            if (glucosa < 70)          resultado = "Hipoglucemia";
            else if (glucosa <= 99)    resultado = "Normal";
            else if (glucosa <= 125)   resultado = "Prediabetes (glucosa en ayunas alterada)";
            else                       resultado = "Diabetes";
            break;
        case 2:
            tipoTexto = "Aleatoria";
            if (glucosa < 70)          resultado = "Hipoglucemia";
            else if (glucosa <= 139)   resultado = "Normal";
            else if (glucosa <= 199)   resultado = "Riesgo elevado / posible prediabetes";
            else                       resultado = "Diabetes (requiere confirmacion)";
            break;
        case 3:
            tipoTexto = "Postprandial";
            if (glucosa < 70)          resultado = "Hipoglucemia";
            else if (glucosa <= 139)   resultado = "Normal";
            else if (glucosa <= 199)   resultado = "Prediabetes (intolerancia a la glucosa)";
            else                       resultado = "Diabetes";
            break;
        default:
            printf("Opcion invalida.\n");
            return 1;
    }

    printf("\n--- Resultado ---\n");
    printf("Tipo de medicion: %s\n", tipoTexto);
    printf("Glucosa: %.1f mg/dL\n", glucosa);
    printf("Clasificacion: %s\n", resultado);
    printf("\nNota: Rangos de referencia generales, no sustituyen diagnostico medico.\n");
    return 0;
}
