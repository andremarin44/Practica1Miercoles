#include <iostream>
#include <stdio.h>

using namespace std;

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int Ejercicio10(){
    int n, contador = 0, numeroPrimo = 2;

       // Entrada de datos
       printf("Ingrese un número n: ");
       scanf("%d", &n);

       // Búsqueda del enésimo número primo
       while (contador < n) {
           if (esPrimo(numeroPrimo)) {
               ++contador;
           }
           if (contador < n) {
               ++numeroPrimo;
           }
       }

       // Salida de resultados
       printf("El primo número %d es: %d\n", n, numeroPrimo);

       return 0;
}
