#include<iostream>
using namespace std;
int main(){
 int numero[10];
 int tamaño=sizeof(numero)/sizeof(numero[0]);//se esta haciendo uyn buclepara solicitar que almacene los datos y ponerlos enel arreglo
 for (int i = 0; i < tamaño; i++)
 {
    cout<<"ingrese los valores del["<<i<<"]"<<endl;
    cin>> numero[i];
 }
//MENOR A MAYOR//
for (int i = 0; i < tamaño; i++)//hacemos que comienze desde 0 hasta tamaño



 {
 for (int j = 0; j < tamaño - 1; j++)//con este for hacemos que comience desde 0 hasta tamaño-1

//para que no se haga el recorrido hasta el ultimo

 {

 if (numero[j] > numero[j + 1])//hacemos la comparacion de que a[j] sea mayor que a[j+1] si esto se cumple se ejecuta lo siguiente

 {

int tempo = numero[j];//creamos una variable tempo y le asiganamos el nuemro[j]

 numero[j] = numero[j + 1];

 numero[j + 1] = tempo;

 }

 }

 }

 cout << endl

<< "El arreglo ordenado de menor a mayor es: ";




 for (int i = 0; i < tamaño; i++)

 {

 cout << numero[i] << " ";

 }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

// MAYOR A MENOR

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////

 for (int i = 0; i < tamaño; i++)

{

 for (int j = 0; j < tamaño - 1; j++)

 {

 if (numero[j] < numero[j + 1])

 {

 int tempo = numero[j];

numero[j] = numero[j + 1];

 numero[j + 1] = tempo;

 }

 }

 }

 cout << endl

<< "El arreglo ordenado de mayor a menor es: ";

 for (int i = 0; i < tamaño; i++)

 {

 cout << numero[i] << " ";
  }
   }