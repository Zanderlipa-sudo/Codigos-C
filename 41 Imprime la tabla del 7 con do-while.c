#include <stdio.h>

int main() {
    int i = 1, n = 10;

    printf("TABLA DEL 7\n");
    do {
        printf("7 x %d = %d\n", i, i * 7);
        i++;
    } while (i <= n);

    return 0;
}
