#include <iostream>
#include <stdio.h>

using namespace std;
int mayorFactorPrimo(int numero) {
    int factor = 2;
    while (factor * factor <= numero) {
        if (numero % factor == 0) {
            numero /= factor;
        } else {
            ++factor;
        }
    }
    return numero;
}
int Ejercicio12(){
    // Declaración de variables
        int numero;

        // Entrada de datos
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        // Cálculo del mayor factor primo
        int resultado = mayorFactorPrimo(numero);

        // Salida de resultados
        printf("El mayor factor primo de %d es: %d\n", numero, resultado);

        return 0;
}
