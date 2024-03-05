#include <iostream>
#include <stdio.h>

using namespace std;
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcm(int a, int b) {
    return (a * b) / mcd(a, b);
}

int calcularMCM(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado = mcm(resultado, i);
    }
    return resultado;
}

int Ejercicio11(){
    // Declaración de variables
     int numero;

     // Entrada de datos
     printf("Ingrese un número: ");
     scanf("%d", &numero);

     // Cálculo del mínimo común múltiplo
     int resultado = calcularMCM(numero);

     // Salida de resultados
     printf("El mínimo común múltiplo es: %d\n", resultado);

     return 0;
}
