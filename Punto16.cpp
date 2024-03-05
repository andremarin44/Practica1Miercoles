#include <iostream>
using namespace std;
void conjetura (int x){
    cout<<x<<" ";
    if(x > 1){
        if(x % 2 ==0){
            conjetura(x/2);
        }else{
            conjetura(x+x+x+1);
        }
    }
}
int Ejercicio16(){
    int x= 0;
    cout<<"Numero: ";
    cin>>x;
    conjetura(x);
    return 0;
}
