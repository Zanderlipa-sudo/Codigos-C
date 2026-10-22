#include <stdio.h>

int main() {
    int opcionDonante, opcionReceptor;
    int compatible = 0;
    const char *donante, *receptor;
    const char *nombres[] = {"", "O-", "O+", "A-", "A+", "B-", "B+", "AB-", "AB+"};

    printf("=== Consulta de Compatibilidad Sanguinea ===\n\n");
    printf("Tipos de sangre disponibles:\n");
    printf("1. O-\n2. O+\n3. A-\n4. A+\n5. B-\n6. B+\n7. AB-\n8. AB+\n\n");

    printf("Seleccione el tipo de sangre del DONANTE: ");
    scanf("%d", &opcionDonante);
    printf("Seleccione el tipo de sangre del RECEPTOR: ");
    scanf("%d", &opcionReceptor);

    if (opcionDonante < 1 || opcionDonante > 8 ||
        opcionReceptor < 1 || opcionReceptor > 8) {
        printf("\nOpcion invalida.\n");
        return 1;
    }

    donante  = nombres[opcionDonante];
    receptor = nombres[opcionReceptor];

    switch (opcionDonante) {
        case 1: compatible = 1; break; /* O- universal */
        case 2: compatible = (opcionReceptor == 2 || opcionReceptor == 4 ||
                              opcionReceptor == 6 || opcionReceptor == 8); break;
        case 3: compatible = (opcionReceptor == 3 || opcionReceptor == 4 ||
                              opcionReceptor == 7 || opcionReceptor == 8); break;
        case 4: compatible = (opcionReceptor == 4 || opcionReceptor == 8); break;
        case 5: compatible = (opcionReceptor == 5 || opcionReceptor == 6 ||
                              opcionReceptor == 7 || opcionReceptor == 8); break;
        case 6: compatible = (opcionReceptor == 6 || opcionReceptor == 8); break;
        case 7: compatible = (opcionReceptor == 7 || opcionReceptor == 8); break;
        case 8: compatible = (opcionReceptor == 8); break;
    }

    printf("\n--- Resultado ---\n");
    printf("Donante: %s\n", donante);
    printf("Receptor: %s\n", receptor);
    if (compatible)
        printf("Compatibilidad: SI, la donacion es compatible.\n");
    else
        printf("Compatibilidad: NO, la donacion NO es compatible.\n");

    return 0;
}
