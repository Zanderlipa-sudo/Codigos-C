#include <stdio.h>

int main() {
    double suma = 0, temp, prom;
    int alertaAltaTemp = 0, i;
    const int registros = 5;

    printf("TEMPERATURA DE UN INVERNADERO\n");
    printf("Lecturas cada 3 horas (5 registros en total)\n");

    for (i = 1; i <= registros; i++) {
        printf("Ingrese la temperatura registrada %d: \n", i);
        scanf("%lf", &temp);
        suma += temp;
        if (temp > 28)
            alertaAltaTemp++;
    }

    prom = suma / registros;

    printf("El promedio de temperatura es: %.2fC\n", prom);
    printf("Cantidad total de alertas por calor extremo: %d\n", alertaAltaTemp);
    return 0;
}
