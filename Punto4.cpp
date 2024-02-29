#include <iostream>

using namespace std;

int Ejercicio4(){

    int hora, duracion;

        // Solicitar entrada de usuario y verificar la validez
        cout << "Ingrese la hora (formato de 24 horas): ";
        cin >> hora;

        if (hora < 0 || hora > 2359 || cin.fail()) {
            cout << hora << " es un tiempo invalido." << endl;
            return 1;
        }

        cout << "Ingrese la duración: ";
        cin >> duracion;

        if (duracion < 0 || duracion > 2359 || cin.fail()) {
            cout << duracion << " es un tiempo invalido." << endl;
            return 1;
        }

        // Calcular la nueva hora sumando la duración
        int nuevaHora = (hora + duracion) % 2400;

        // Asegurar que los minutos no superen los 60
        int minutos = nuevaHora % 100;
        if (minutos >= 60) {
            nuevaHora -= minutos;
            nuevaHora += 100;  // Agregar una hora si los minutos superan los 60
        }

        // Asegurar que la hora no supere las 23:59
        if (nuevaHora >= 2400) {
            nuevaHora -= 2400;
        }

        // Imprimir el resultado en el formato especificado
        cout << "La hora es ";

        // Imprimir las horas
        if (nuevaHora / 100 < 10) {
            cout << "0";
        }
        cout << nuevaHora / 100;

        // Imprimir los minutos
        if (nuevaHora % 100 < 10) {
            cout << "0";
        }
        cout << nuevaHora % 100 << "." << endl;

        return 0;
    }



