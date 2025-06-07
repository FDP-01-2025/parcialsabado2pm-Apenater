#include <iostream>

using namespace std;

int main(){
    
    int numero[10];
    int suma = 0;

    for (int i = 0; i<10; i++){
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>numero[i];
        suma = suma + numero[i];
    }

    cout<<"La suma de todos los numero es: "<<suma; 

    return 0;
}