#include <stdio.h>
#include <stdbool.h>  // Para usar el tipo booleano 'bool'

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  // Si n es divisible por i, no es primo
        }
    }
    return true;  // Si no encontramos divisores, es primo
}

int main(void) {
    int inicio, fin;
    printf("Introduce el valor de inicio del intervalo: ");
    scanf("%d", &inicio);
    printf("Introduce el valor de fin del intervalo: ");
    scanf("%d", &fin);

    // Verificar si el intervalo es válido
    if (inicio > fin) {
        printf("El intervalo no es válido. El inicio debe ser menor o igual al fin.\n");
        return 1;
    }

    printf("Números primos en el intervalo [%d, %d]:\n", inicio, fin);

    // Verificar todos los números en el intervalo
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
