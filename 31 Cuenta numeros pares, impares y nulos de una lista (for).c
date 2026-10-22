#include <stdio.h>

int main() {
    double suma = 0;
    int nulo = 0, par = 0, impar = 0, n, i;

    printf("NUMEROS PARES E IMPARES\n");

    for (i = 1; i <= 10; i++) {
        printf("Ingrese el numero %d: \n", i);
        scanf("%d", &n);
        suma += n;

        if (n == 0)          nulo++;
        else if (n % 2 == 0) par++;
        else                 impar++;
    }

    printf("Suma total de numeros : %.0f\n", suma);
    printf("Total de numeros pares : %d\n", par);
    printf("Total de numeros impares : %d\n", impar);
    printf("Total de numeros nulos : %d\n", nulo);
    return 0;
}
