#include <stdio.h>

int main() {
    int donante, receptor;

    printf("=== COMPATIBILIDAD SANGUINEA ===\n");
    printf("\nTipos de sangre:\n");
    printf("1. O-\n2. O+\n3. A-\n4. A+\n5. B-\n6. B+\n7. AB-\n8. AB+\n");

    printf("\nSeleccione el tipo de sangre del DONANTE: ");
    scanf("%d", &donante);
    printf("Seleccione el tipo de sangre del RECEPTOR: ");
    scanf("%d", &receptor);

    if (receptor < 1 || receptor > 8) {
        printf("\nTipo de receptor no valido.\n");
        return 1;
    }

    switch (donante) {
        case 1: /* O- dona a todos */
            printf("\nCompatible: O- puede donar a todos.\n");
            break;
        case 2: /* O+ -> O+, A+, B+, AB+ */
            if (receptor == 2 || receptor == 4 || receptor == 6 || receptor == 8)
                printf("\nCompatible.\n");
            else printf("\nNo compatible.\n");
            break;
        case 3: /* A- -> A-, A+, AB-, AB+ */
            if (receptor == 3 || receptor == 4 || receptor == 7 || receptor == 8)
                printf("\nCompatible.\n");
            else printf("\nNo compatible.\n");
            break;
        case 4: /* A+ -> A+, AB+ */
            if (receptor == 4 || receptor == 8) printf("\nCompatible.\n");
            else printf("\nNo compatible.\n");
            break;
        case 5: /* B- -> B-, B+, AB-, AB+ */
            if (receptor == 5 || receptor == 6 || receptor == 7 || receptor == 8)
                printf("\nCompatible.\n");
            else printf("\nNo compatible.\n");
            break;
        case 6: /* B+ -> B+, AB+ */
            if (receptor == 6 || receptor == 8) printf("\nCompatible.\n");
            else printf("\nNo compatible.\n");
            break;
        case 7: /* AB- -> AB-, AB+ */
            if (receptor == 7 || receptor == 8) printf("\nCompatible.\n");
            else printf("\nNo compatible.\n");
            break;
        case 8: /* AB+ -> AB+ */
            if (receptor == 8) printf("\nCompatible.\n");
            else printf("\nNo compatible.\n");
            break;
        default:
            printf("\nTipo de sangre del donante no valido.\n");
    }

    return 0;
}
