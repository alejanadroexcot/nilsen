/*Escribir un programa que solicite al usuario un arreglo y luego ordene el arreglo de mayor a menor y de menor a mayor
*/
//ejercicio 3 y 4//
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

 //esto hace para ver lso valores quele an asignado
 //NUEMRO MENOR//
 //ESTE for es para sacar el menor numero de lso arreglos
 int menor=numero[0];
for (int i = 0; i < tamaño; i++)
{
    if (numero[i]< menor)//usamos el if para hacer una com paracion del primer arreglo numero[1] si es menor que numero[0]
    {
        menor=numero[i];// si el arreglo cumple con la condicion  se convierte en menor
    }
    
}
//NUMERO MAYOR//
int mayor=numero[0];
for (int i = 0; i < tamaño; i++)
{
    if (numero[i]> mayor)//usamos el if para hacer una com paracion del primer arreglo numero[1] si es mayor que numero[0]
    {
        mayor=numero[i];// si el arreglo cumple con la condicion  se convierte en mayor
    }
    
}
//imprimimos las variables de for//
cout<<" el numemero mayor es "<<menor<<endl;
cout<<"el numero mayor es "<<mayor<<endl;
cout<<"lso numero que se repiten en los arreglos son: ";//imrise en el siguiente fot
// este for lo usamos para saber que numeros se repiden en el arreglo

 for (int i = 0; i < tamaño - 1; i++)//hacemos que comienze desde 0 hasta tamanio -1

   

 //para que no se haga el recorrido hasta el ultimo

 {

 for (int j = i + 1; j < tamaño; j++)//con este for hacemos que comienze de i+1 osea de tamanio para que se haga

 
//el recorrido hasta el ultimo

 {

 if (numero[i] == numero[j])//con este if hacemos la comparacion si el a[i] es igual que a[j]

 {

 cout << numero[i] << " ";//si se cumple el if se escribe el valor a[i] que se repite

 break;// esto es para que finalice el bucle

 }

 }

 }

 //SUMA DE PROMEDIO//
   float suma;
   for (int i = 0; i < tamaño; i++)
   {
    suma+=numero[i];//hacemos la suma por que es necesaria para hallar el promedio
   }
   cout<<"la suma de los itemns de arreglos son "<<suma<<endl;
   
   //PROMEDIO//
   float promedio=suma/tamaño;
   cout<<"el promedio del arreglo es: "<< promedio;
   //MEDIANA//
   //para halardevemos de ordenar los datos de los dos for
   for (int i = 0; i < tamaño; i++)
   {
    for (int j = 0; j < tamaño-1; j++)
    {
        
 if (numero[j] >numero[j + 1])
 {

 int tempo = numero[j];

 numero[j] = numero[j + 1];

 numero[j + 1] = tempo;

 }
   
    }

   }
  
     int mediana;
     mediana=(tamaño-1)/2;
     cout<<endl<<"el nuevo valor es: "<<numero[mediana];

    return 0;
}


