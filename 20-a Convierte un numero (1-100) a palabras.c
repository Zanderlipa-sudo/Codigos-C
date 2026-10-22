#include <stdio.h>

int main() {
    int numero, decenas, unidades;
    const char *uni[] = {"", "Uno", "Dos", "Tres", "Cuatro", "Cinco",
                         "Seis", "Siete", "Ocho", "Nueve"};
    const char *esp[] = {"Diez", "Once", "Doce", "Trece", "Catorce", "Quince",
                        "Dieciseis", "Diecisiete", "Dieciocho", "Diecinueve",
                        "Veinte", "Veintiuno", "Veintidos", "Veintitres",
                        "Veinticuatro", "Veinticinco", "Veintiseis",
                        "Veintisiete", "Veintiocho", "Veintinueve"};
    const char *dec[] = {"", "", "", "Treinta", "Cuarenta", "Cincuenta",
                        "Sesenta", "Setenta", "Ochenta", "Noventa"};

    printf("CONVERTIR NUMEROS A PALABRAS (1 - 100)\n");
    printf("\nIngrese un numero entre 1 y 100: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 100) {
        printf("ERROR: El numero ingresado esta fuera de rango permitido (1 - 100).\n");
        return 1;
    }

    printf("El numero en palabras es: ");
    if (numero == 100) {
        printf("Cien");
    } else if (numero <= 9) {
        printf("%s", uni[numero]);
    } else if (numero <= 29) {
        printf("%s", esp[numero - 10]);
    } else {
        decenas = numero / 10;
        unidades = numero % 10;
        printf("%s", dec[decenas]);
        if (unidades > 0)
            printf(" y %s", uni[unidades]);
    }
    printf("\n");

    return 0;
}
