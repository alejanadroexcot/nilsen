#include <iostream>
using namespace std;
int main (){
int mes;
cout<<"ingrese el numero del mes"<<endl;//imprimimos "para que el usuario ingrese un numero"
cin>>mes;
switch (mes)//switch lee el numero ingresado y lo compara con los case creados
{
case 1: // si el valor es 1 se ejecuta
    cout<<"Enero";
    break;

case 2: // si el valor es 2 se ejecuta
    cout<<"Febrero";
    break;

case 3: // si el valor es 3 se ejecuta
    cout<<"Marzo";
    break;

case 4: // si el valor es 4 se ejecuta
    cout<<"Abril";
    break;

case 5: // si el valor es 5 se ejecuta
    cout<<"Mayo";
    break;

case 6: // si el valor es 6 se ejecuta
    cout<<"Junio";
    break;

case 7: // si el valor es 7 se ejecuta
    cout<<"Julio";
    break;

case 8: // si el valor es 8 se ejecuta
    cout<<"Agosto";
    break;

case 9: // si el valor es 9 se ejecuta
    cout<<"Setiembre";
    break;

case 10: // si el valor es 10 se ejecuta
    cout<<"Octubre";
    break;

case 11: // si el valor es 11 se ejecuta
    cout<<"Noviembre";
    break;

case 12: // si el valor es 12 se ejecuta
    cout<<"Diciembre";
    break;
    
default:// en caso no se cumpla ninguna de los case se cumple operacion
cout<<"valor no valido";
    break;
}

    return 0;
}
