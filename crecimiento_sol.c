#include <cs50.h>
#include <stdio.h>   
#include <math.h>

int main(void)
{         
    // Solicitar cantidad inicial
    int n;
    do {
        n = get_int("Ingrese la cantidad inicial: ");
    }
    while (n < 10);

    // Solicitar cantidad final
    int m;
    do {
        m = get_int("Ingrese la cantidad final: ");
    }
    while (m < n);

    // Calcular número de años hasta alcanzar el tamaño final
    int y = 0;
    while (n < m) {
        n = n + round(n/2) - round(n/6);
        y++;
    }

    // Imprimir número de años o ciclos anuales
    printf("Years: %i\n", y);
}
