#include <iostream>

using namespace std;

int main(){
    int edad;

    cout<<"Ingrese su edad:";

    cin >> edad;

    if (edad < 18){
        cout<<"Usted es menor de edad";
    }else if (edad >= 18 && edad <= 59){
        cout<<"Usted es un adulto";
    }else if (edad > 59 && edad < 100){
        cout<<"Usted es un adulto mayor";
    }else{
        cout<<"Edad no valida";
    }

    return 0;
}