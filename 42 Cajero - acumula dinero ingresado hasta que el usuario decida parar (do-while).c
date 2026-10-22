#include <stdio.h>

int main() {
    double monto, saldoTotal = 0;
    char res;

    do {
        printf("Ingrese el monto que desea ingresar (S/.1, S/.2, S/.5, S/.10, S/.20) : S/.");
        scanf("%lf", &monto);

        if (monto != 1 && monto != 2 && monto != 5 && monto != 10 && monto != 20) {
            printf("El valor ingresado no es correcto\n");
            break;
        }

        saldoTotal += monto;
        printf("Saldo actual : S/.%.2f\n", saldoTotal);

        printf("Desea ingresar mas dinero? (S = si, N = no): ");
        scanf(" %c", &res);
    } while (res == 'S' || res == 's');

    printf("Saldo total = S/.%.2f\n", saldoTotal);
    return 0;
}
