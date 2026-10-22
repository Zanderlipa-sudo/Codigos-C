#include <stdio.h>

int main() {
    int n, i = 1;
    long long a = 0, b = 1, c;

    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, ingrese un numero mayor a 0.\n");
        return 1;
    }

    do {
        if (i == 1) {
            printf("%lld ", a);
        } else if (i == 2) {
            printf("%lld ", b);
        } else {
            c = a + b;
            a = b;
            b = c;
            printf("%lld ", c);
        }
        i++;
    } while (i <= n);

    printf("\n");
    return 0;
}
