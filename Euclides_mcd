#include <stdio.h>

int mcd_iterativo(int a, int b) {
    while (b != 0) {
        int residuo = a % b;
        a = b;
        b = residuo;
    }
    return a;  // Cuando b es 0, a es el MCD
}

int main(void) {
    int a, b;

    printf("Introduce el primer número: ");
    scanf("%d", &a);
    printf("Introduce el segundo número: ");
    scanf("%d", &b);

    int resultado = mcd_iterativo(a, b);

    printf("El MCD de %d y %d es %d\n", a, b, resultado);

    return 0;
}
