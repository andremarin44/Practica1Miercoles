#include <iostream>

using namespace std;

int Ejercicio5(){
    int n;
    char simbolo;
    cout<<"Ingrese un numero : ";
    cin>> n ;

    cout<<"Ingrese el simbolo que desea : ";
    cin>>simbolo;
    cout<<"\n";

    if (n%2==0){
        n++;
    }
    for (int i =1; i <=n ; i+=2){

        for (int j = n+1; j>=i; j-=2){
        cout << " ";
        }

        for (int k = 1; k <=i; k++){
            cout << simbolo ;
        }
        cout << endl;
    }
    for(int i=n; i>=1; i-=2){
        for(int j=i; j<=n+2; j+=2){
        cout << " ";
            }
        for (int k=i-2;k>0; k--){
        cout << simbolo;
        }
        cout << endl;
    }
    return 0;
}
