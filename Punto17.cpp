#include <iostream>
#include <stdio.h>

using namespace std;
int contarDivisores(int numero) {
    int contador = 0;
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            ++contador;
        }
    }
    return contador;
}

int encontrarPrimerTriangularConDivisores(int k) {
    int n = 1;
    while (1) {
        int numeroTriangular = n * (n + 1) / 2;
        int cantidadDivisores = contarDivisores(numeroTriangular);

        if (cantidadDivisores > k) {
            return numeroTriangular;
        }

        ++n;
    }
}

int Ejercicio17(){
    // Declaración de variables
        int k;

        // Entrada de datos
        printf("Ingrese el valor de k: ");
        scanf("%d", &k);

        // Cálculo del primer número triangular con más de k divisores
        int resultado = encontrarPrimerTriangularConDivisores(k);

        // Salida de resultados
        printf("El número es: %d que tiene %d divisores.\n", resultado, contarDivisores(resultado));

        return 0;
}
