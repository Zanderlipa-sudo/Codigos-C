#include <stdio.h>

int main() {
    const double IGV = 0.18;
    double precioBase, igv, precioFinal;

    printf("Ingrese el precio base del producto: ");
    scanf("%lf", &precioBase);

    igv = precioBase * IGV;
    precioFinal = precioBase + igv;

    printf("El IGV (18%%) es: %.2f\n", igv);
    printf("El precio final con IGV es: %.2f\n", precioFinal);
    return 0;
}
