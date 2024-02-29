#include <iostream>

using namespace std;

int Ejercicio3(){
    // Declarar variables para el mes, día y año
        int mes, dia, year;

        // Solicitar entrada de usuario
        cout << "Ingrese el mes: ";
        cin >> mes;

        // Verificar si el mes es válido
        if (mes < 1 || mes > 12) {
            cout << mes << " es un mes invalido." << endl;
            return 1;  // Terminar el programa con un código de error
        }

        // Solicitar día y año
        cout << "Ingrese el dia: ";
        cin >> dia;
        cout << "Ingrese el ano: ";
        cin >> year;

        // Verificar si el día y el año son válidos
        if (dia < 1 || dia > 31) {
            cout << dia << "/" << mes << " es una fecha invalida." << endl;
            return 1;  // Terminar el programa con un código de error
        }

        // Verificar febrero y el caso especial del 29 de febrero
        if (mes == 2) {
            if (dia == 29) {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    cout << dia << "/" << mes << " es válida en bisiesto." << endl;
                } else {
                    cout << dia << "/" << mes << " es una fecha invalida." << endl;
                    return 1;  // Terminar el programa con un código de error
                }
            } else if (dia > 29) {
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
                return 1;  // Terminar el programa con un código de error
            }
        }

        // Verificar meses con 30 días
        if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
            cout << dia << "/" << mes << " es una fecha invalida." << endl;
            return 1;  // Terminar el programa con un código de error
        }

        // Si pasa todas las verificaciones, la fecha es válida
        cout << dia << "/" << mes << " es una fecha valida." << endl;

        return 0;  // Indicar que el programa terminó con éxito
    }

