#include <stdio.h>

int main() {
    int segundosTotales, horas, minutos, segundos;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &segundosTotales);

    horas    = segundosTotales / 3600;
    minutos  = (segundosTotales % 3600) / 60;
    segundos = segundosTotales % 60;

    printf("Equivale a: %d horas, %d minutos y %d segundos\n",
           horas, minutos, segundos);
    return 0;
}
