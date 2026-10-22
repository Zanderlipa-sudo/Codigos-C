#include <stdio.h>

int main() {
    float glucosa;
    int categoria;

    printf("Ingrese el nivel de glucosa en sangre (mg/dL): ");
    scanf("%f", &glucosa);

    if (glucosa < 70)        categoria = 1;
    else if (glucosa < 100)  categoria = 2;
    else if (glucosa < 126)  categoria = 3;
    else                     categoria = 4;

    switch (categoria) {
        case 1: printf("\nResultado: HIPOGLUCEMIA\n");                break;
        case 2: printf("\nResultado: GLUCOSA NORMAL\n");              break;
        case 3: printf("\nResultado: GLUCOSA ELEVADA / PREDIABETES\n");break;
        case 4: printf("\nResultado: POSIBLE DIABETES\n");            break;
    }

    return 0;
}
