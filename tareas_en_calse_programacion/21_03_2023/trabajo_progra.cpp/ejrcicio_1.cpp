#include <iostream>
using namespace std;


int main()

{

 // Declaración de variables

 int numero[5];

numero[0]=1;

numero[1]=2;

numero[2]=3;

numero[3]=4;

numero[4]=5;


int tamaño=sizeof(numero)/sizeof(numero[0]);//CREAMOS TAMAÑO CON EL TAMAÑO DEL ARREGLO

int tamaño2=sizeof(numero)/sizeof(numero[0]);

cout<<"\n"<<tamaño;

cout<<"\n"<<tamaño2;

//SE HACE UN BUCLE PARA SOLICITAR LOS DATOS Y PONERLOS EN SU RESPECTIVO ARREGLO
for(int i=0;i<tamaño;i++){ ;

cout<<"\n"<<"el valor del vector a["<<i<<"]"<<numero[i];

int suma_par= numero[5];

 for (int i = 1; i < tamaño; i++)

 {

 if (numero[1] + numero[3])
 {

 suma_par=numero[1]+numero[3];
 }

 }

 cout<<"\n"<< "la suma de los numeros par son: " <<suma_par<<endl;

 int suma_impar (numero[1+3+5]);

suma_impar=numero[1+3+5];

suma_impar=1+3+5;

 cout<<"la suma de los numeros de el arreglo es: "<<suma_impar;

 return 0;

 }

}


