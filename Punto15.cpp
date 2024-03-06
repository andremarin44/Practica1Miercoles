#include <iostream>
#include <windows.h>

using namespace std;

int Ejercicio15(){
    int filas;
    int columnas;
    int **matriz;

    cin>>filas>>columnas;

    matriz = new int*[filas];

    for(int i = 0; i<filas; i++){
        matriz[i]= new int [columnas];
        for(int j = 0; j<columnas; j++){
            matriz[i][j]=0;
        }
    }
    int f = 0;
    int c = 0;
    int n = 1;
    int p = 1;
    int mn_f = 0;
    int mn_c = 0;
    int mx_f = filas-1;
    int mx_c = columnas-1;

    int max = filas* columnas;
    for(int i = 0;i <max;i++){
        matriz[f][c] = n;
        n++;

        switch(p){

        case 1:
        c++;
        if(c >=mx_c){ c = mx_c; p++;}

            break;
        case 2:
        f++;
        if(f >=mx_f){f = mx_f; p++;}

            break;
        case 3:
        c--;
        if(c<=mn_c){ c = mn_c; p++;}

            break;
        case 4:
        f--;
        if(f == mn_f+1){ f = mn_f+1; p++; }
            break;
        }
        if (p>4)
        {
            mx_f--;
            mx_c--;
            mn_f++;
            mn_c++;

            p = 1;
        }
    }
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
        delete[] matriz[i];
    }
    delete[] matriz;
    cout<<"\n";
    system("pause");

    return 0;
}
