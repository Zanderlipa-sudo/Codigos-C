#include <stdio.h>

int main() {
    float nota;
    int n, i = 1;

    printf("Ingrese la cantidad de notas\n");
    scanf("%d", &n);

    do {
        printf("Ingrese la nota del Examen Parcial (0 a 20) %d : \n", i);
        scanf("%f", &nota);

        if (nota < 0 || nota > 20)
            printf("\nLa nota ingresada no es correcta\n");
        else if (nota >= 10.5f)
            printf("Estado: Aprobado\n");
        else
            printf("Estado: Desaprobado\n");

        i++;
    } while (i <= n);

    return 0;
}
