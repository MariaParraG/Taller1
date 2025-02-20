#include <stdio.h>
#include <stdbool.h>  // Para usar el tipo booleano 'bool'

bool esPrimo(int n) {
    // Si n es menor o igual a 1, no es primo
    if (n <= 1) {
        return false;
    }

    // Verificar hasta la raíz cuadrada de n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  // Si n es divisible por i, no es primo
        }
    }
    return true;  // Si no encontramos divisores, es primo
}

int main(void) {
    int n;

    printf("Introduce un número para verificar si es primo: ");
    scanf("%d", &n);

    // Verificar si el número es primo
    if (esPrimo(n)) {
        printf("%d es un número primo.\n", n);
    } else {
        printf("%d no es un número primo.\n", n);
    }

    return 0;
}
