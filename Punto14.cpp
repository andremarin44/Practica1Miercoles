#include <iostream>
using namespace std;

int invertir(int n);

bool esPalindromo(int n);

int Ejercicio14(void){
    int n;
    cout << "n=";cin >>n;
    if(esPalindromo(n)){
        cout << " es Palindromo" << endl;
    }else{
        cout << "no es Palindromo" << endl;
    }
    return 0;
}

int invertir(int n){
    int respuesta = 0;

    while(n>0){
        respuesta = respuesta + n % 10;
        respuesta = respuesta * 10;
        n = n/10;
    }
    return respuesta/10;
}

bool esPalindromo(int n){
    if(n==invertir(n)){
        return true;
    }else{
        return false;
    }
}
