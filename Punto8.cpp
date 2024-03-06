#include <iostream>

using namespace std;

int Ejercicio8(){
    // Declaración de variables
    int a, b, c;
    int suma = 0;

    // Entrada de datos
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    printf("Ingrese el valor de c: ");
    scanf("%d", &c);

    // Cálculo de la suma de los múltiplos
    for (int i = 1; i < c; ++i) {
        if (i % a == 0 || i % b == 0) {
            suma += i;
        }
    }

    // Salida de resultados
    printf("La suma de los multiplos de %d y %d menores a %d es: ", a, b, c);

    // Imprimir los múltiplos
    for (int i = 1; i < c; ++i) {
        if (i % a == 0) {
            printf("m%d1 + ", i / a);
        }
    }

    for (int i = 1; i < c; ++i) {
        if (i % b == 0) {
            printf("m%d2 + ", i / b);
        }
    }

    // Imprimir la sumatoria
    printf("\b\b= %d\n", suma);

    return 0;
}

