#include <iostream>
using namespace std;
//creamos al funcion llamada operacion para ella necesitaremos el dato año
int operacion(int año)
{
int operacion1=0;//creamos una variable operacion1
operacion1=2023-año;//a esta operacion le asignamos la resta 2023 menos la variable año
return operacion1;//retornamos operacion1
}

int main(){
int año=0;
int edad=0;

cout<<" Ingrese el año de nacimiento"<<endl;
cin>>año;
edad=operacion(año);//llamamos a la funcion
cout<<"tu edad es "<<edad<<"\n";//imprimir la edad quue sale con la funcion
if(edad<18){//comparacion con el if, que si la edad que resulta es menos que 18 si es asi...
cout<<"Eres menor de edad";//se ejecuta eso
}
else
cout<<"Eres mayor de edad";//si es falso imprime esto

 return 0;
}
