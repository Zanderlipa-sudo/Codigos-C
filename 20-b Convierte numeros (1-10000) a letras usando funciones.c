#include <stdio.h>
#include <string.h>

static const char *UNI[] = {"", "uno", "dos", "tres", "cuatro", "cinco",
                            "seis", "siete", "ocho", "nueve"};

void decenas(int n, char *out) {
    const char *especiales[] = {"diez", "once", "doce", "trece", "catorce",
                                "quince", "dieciseis", "diecisiete",
                                "dieciocho", "diecinueve"};
    const char *dec[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta",
                        "sesenta", "setenta", "ochenta", "noventa"};
    if (n < 10) {
        strcpy(out, UNI[n]);
    } else if (n < 20) {
        strcpy(out, especiales[n - 10]);
    } else if (n < 30) {
        if (n == 20) strcpy(out, "veinte");
        else { strcpy(out, "veinti"); strcat(out, UNI[n - 20]); }
    } else {
        strcpy(out, dec[n / 10]);
        if (n % 10 != 0) { strcat(out, " y "); strcat(out, UNI[n % 10]); }
    }
}

void centenas(int n, char *out) {
    const char *cen[] = {"", "ciento", "doscientos", "trescientos",
                        "cuatrocientos", "quinientos", "seiscientos",
                        "setecientos", "ochocientos", "novecientos"};
    char resto[80];
    if (n == 100) {
        strcpy(out, "cien");
    } else if (n > 100 && n < 1000) {
        strcpy(out, cen[n / 100]);
        if (n % 100 != 0) { decenas(n % 100, resto); strcat(out, " "); strcat(out, resto); }
    } else {
        decenas(n, out);
    }
}

void miles(int n, char *out) {
    int m = n / 1000, resto = n % 1000;
    char buf[120];
    if (n == 1000) { strcpy(out, "mil"); return; }
    if (n > 1000 && n <= 10000) {
        if (m == 1)       strcpy(out, "mil");
        else if (m == 10) { strcpy(out, "diez mil"); return; }
        else { strcpy(out, UNI[m]); strcat(out, " mil"); }
        if (resto != 0) { centenas(resto, buf); strcat(out, " "); strcat(out, buf); }
    } else {
        centenas(n, out);
    }
}

void numeroALetra(int n, char *out) {
    if (n == 10000)                 strcpy(out, "diez mil");
    else if (n >= 1000 && n < 10000) miles(n, out);
    else if (n >= 1 && n < 1000)    centenas(n, out);
    else                            strcpy(out, "Numero fuera de rango");
}

int main() {
    char texto[160];
    int i;
    for (i = 1; i <= 10000; i++) {
        numeroALetra(i, texto);
        printf("%d: %s\n", i, texto);
    }
    return 0;
}
