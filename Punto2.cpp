#include <iostream>

using namespace std;

int Ejercicio2(){

    int billetes,cantidad;

    cout<<"Dame la cantidad de billetes: ";
    cin>> billetes;

    cantidad = billetes / 50000;
    billetes %= 50000;
    cout << "Billetes de 50000 pesos ["<<cantidad<<"]\n";

    cantidad = billetes / 20000;
    billetes %= 20000;
    cout << "Billetes de 20000 pesos ["<<cantidad<<"]\n";

    cantidad = billetes / 10000;
    billetes %= 10000;
    cout << "Billetes de 10000 pesos ["<<cantidad<<"]\n";

    cantidad = billetes / 5000;
    billetes %= 5000;
    cout << "Billetes de 5000 pesos ["<<cantidad<<"]\n";

    cantidad = billetes / 2000;
    billetes %= 2000;
    cout << "Billetes de 2000 pesos ["<<cantidad<<"]\n";

    cantidad = billetes / 1000;
    billetes %= 1000;
    cout << "Billetes de 1000 pesos ["<<cantidad<<"]\n";

    cantidad = billetes / 500;
    billetes %= 500;
    cout << "Monedas de 500 pesos ["<<cantidad<<"]\n";

    cantidad = billetes / 200;
    billetes %= 200;
    cout << "Monedas de 200 pesos ["<<cantidad<<"]\n";

    cantidad = billetes / 100;
    billetes %= 100;
    cout << "Monedas de 100 pesos ["<<cantidad<<"]\n";

    cantidad = billetes / 50;
    billetes %= 50;
    cout << "Monedas de 50 pesos ["<<cantidad<<"]\n";

    return 0;
}
