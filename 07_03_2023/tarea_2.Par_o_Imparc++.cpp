#include <iostream>
using namespace std;

void num_par(int num){

if(num%2==0){//se hace una verificacion si el numero ingresado es divisible entre 2 este es par
cout<<"El numero es par"<<endl;
}
else{
cout<<"el numero es impar"<<endl;
}
}

int main(){
    int num;
    cout<<"ingresa un numero entero"<<endl;
    cin>>num;
num_par(num);
int *p;//creamos un puntero
p=&num;//al puntero creado lo hacemos apuntar a la variable la cual hemos trabajado
cout<<"la direccion de memoria es :"<<endl<<p<<endl;//imprimimos la  direccion de memoria

    return 0;
}