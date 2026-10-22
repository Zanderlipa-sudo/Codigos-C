#include <stdio.h>

int main() {
    float nota;
    int nivel;

    printf("SISTEMA DE EVALUACION DE NOTAS (ESCALA 0 - 20)\n");
    printf("Ingrese su nota final (0 - 20): ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 20) {
        printf("ERROR: La nota ingresada no es valida. Debe escribir entre 0 y 20\n");
        return 1;
    }

    if (nota >= 18) {
        printf("Estado: Excelente (Sobresaliente).\n");
        nivel = 1;
    } else if (nota >= 14) {
        printf("Estado: Aprobado (Bueno).\n");
        nivel = 2;
    } else if (nota >= 11) {
        printf("Estado: Aprobado (Regular).\n");
        nivel = 3;
    } else {
        printf("Estado: Desaprobado\n");
        nivel = 4;
    }

    switch (nivel) {
        case 1: printf("Categoria A: Postulante de cuadro de honor o beca\n");   break;
        case 2: printf("Categoria B: Buen rendimiento academico\n");             break;
        case 3: printf("Categoria C: Aprobado, pero requiere reforzamiento\n");  break;
        case 4: printf("Categoria D: Desaprobado, requiere recuperacion\n");     break;
    }

    return 0;
}
