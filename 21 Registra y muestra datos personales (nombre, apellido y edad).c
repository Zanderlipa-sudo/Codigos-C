#include <stdio.h>

int main() {
    char nombre[50], apellido[50];
    int edad;

    printf("Ingresa tu nombre: ");
    scanf("%49s", nombre);
    printf("Ingresa tu apellido: ");
    scanf("%49s", apellido);
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("Nombre completo: %s %s\n", nombre, apellido);
    printf("Edad: %d anios\n", edad);
    return 0;
}
