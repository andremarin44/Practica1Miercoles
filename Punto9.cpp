#include <iostream>
#include <math.h>
using namespace std;

int Ejercicio9(){
    // Declaración de variables
        int numero, digito, suma = 0;

        // Entrada de datos
        printf("Ingrese un numero entero N: ");
        scanf("%d", &numero);

        // Cálculo de la suma de los dígitos elevados a sí mismos
        int original = numero;
        while (numero > 0) {
            digito = numero % 10;
            suma += pow(digito, digito);
            numero /= 10;
        }

        // Salida de resultados
        printf("El resultado de la suma es: %d\n", suma);

        return 0;
}
