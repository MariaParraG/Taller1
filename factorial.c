#include <stdio.h>

int factorialR(int n) {
    if (n <= 1)
        return 1;
    return n * factorialR(n - 1);
}

int factorialI(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(void) {
    int n;

    printf("Introduce un número para calcular su factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El factorial no está definido para números negativos.\n");
        return 1;
    }

    int factorialRNumero = factorialR(n);
    int factorialINumero = factorialI(n);

    printf("El factorial recursivo de %d es %d\n", n, factorialRNumero);
    printf("El factorial iterativo de %d es %d\n", n, factorialINumero);

    return 0;
}
