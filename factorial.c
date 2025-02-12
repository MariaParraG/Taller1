#include <stdio.h>

 int factorialR(int n) {
    if (n <= 1)
        return 1;
    return n * factorialR(n - 1);
 }
 
 int factorialI(int n) {
     int resultado=1;
     for (int i=2; i<=n; i++){
         resultado*=i;
     }
     return resultado;
 }
 
 int main(void) {
    int n = 5;
    int factorialRNumero = factorialR(n);
    int factorialINumero = factorialI(n);
    printf("El factorial recursivo de %llu es %llu \n", n, factorialRNumero);
    
    printf("El factorial iterativo de %llu es %llu", n, factorialINumero);
}
