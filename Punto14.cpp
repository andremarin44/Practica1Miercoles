#include <iostream>
#include <stdio.h>

using namespace std;
int esPalindromo(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }

    return original == invertido;
}

int encontrarMayorPalindromo() {
    int mayorPalindromo = 0;

    for (int i = 100; i < 1000; ++i) {
        for (int j = i; j < 1000; ++j) {
            int producto = i * j;
            if (producto > mayorPalindromo && esPalindromo(producto)) {
                mayorPalindromo = producto;
            }
        }
    }

    return mayorPalindromo;
}

int Ejercicio14(){
    // Encontrar el mayor número palíndromo
       int resultado = encontrarMayorPalindromo();

       // Descomponer en factores
       int factor1, factor2;
       for (int i = 100; i < 1000; ++i) {
           if (resultado % i == 0 && resultado / i < 1000) {
               factor1 = i;
               factor2 = resultado / i;
               break;
           }
       }

       // Salida de resultados
       printf("%d * %d = %d\n", factor1, factor2, resultado);

       return 0;
}
