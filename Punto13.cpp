#include <iostream>

using namespace std;

int Ejercicio13(void){
    int N;
    cout<<"Ingrese un numero entero positivo: " <<endl;
    cin>>N;

    for (int i=2;i<N;i++){

        int creciente = 2;
        bool esPrimo = true;

        while (esPrimo && creciente<i) {

            if (i % creciente==0){
            esPrimo = false;
        }
          else{
            creciente++;
        }
    }
    if (esPrimo){
        cout<<i<<"es primo"<<endl;
    }
}

}
