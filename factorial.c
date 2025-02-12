#include <stdio.h>

 int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
 }
 int main(void) {
    int n = 5;
    int factorialNumero = factorial(n);
    printf("El factorial recursivo de %llu es %llu", n, factorialNumero);
}
