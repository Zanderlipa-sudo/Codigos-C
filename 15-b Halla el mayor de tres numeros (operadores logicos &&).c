#include <stdio.h>

int main() {
    int a, b, c;

    printf("Ingrese el valor de A: ");
    scanf("%d", &a);
    printf("Ingrese el valor de B: ");
    scanf("%d", &b);
    printf("Ingrese el valor de C: ");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("El numero mayor es: %d\n", a);
    else if (b > a && b > c)
        printf("El numero mayor es: %d\n", b);
    else
        printf("El numero mayor es: %d\n", c);

    return 0;
}
