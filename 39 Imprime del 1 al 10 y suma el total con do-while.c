#include <stdio.h>

int main() {
    int i = 1, suma = 0;

    printf("Hello world!\n");
    do {
        printf("Numero :%d\n", i);
        suma += i;
        i++;
    } while (i <= 10);

    printf("La suma total es : %d\n", suma);
    return 0;
}
