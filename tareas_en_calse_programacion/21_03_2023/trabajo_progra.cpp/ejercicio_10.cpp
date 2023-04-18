/*    Escriba un programa que simule el juego de adivinar un número. El programa deberá generar  un  número  aleatorio  entre  1  y  100 ypedirleal  usuario  que  adivine  cuál  es.  Si  el usuario ingresa un número incorrecto, el programa deberá indicarle si el número a adivinar es  mayor  o  menor  al  que  ingresó.  El  juego  termina  cuando  el  usuario  adivina  el  número correcto

*/
/*variable=limite_inferior+rand()%(limite_superior+1 - limite inferior);
*/
#include<iostream>
#include<time.h>
using namespace std;
int main(){ 
int numero,dato,contador=0;
srand(time (NULL));/*generamos un numero aleatorio de 1-100*/

dato= 1+rand()%(100-1);
do
{
   cout<<"digite un numero: ";//dejamos que el usuario digite un numero//
    cin>>numero;
    if (numero<dato)
    {
        cout<<"tibio "<<endl;
    }
    else if (numero>dato)//si el numero esmenor que el dato el usario le dira que es un numero mayor

    {
        cout<< "muy caliente "<<endl;
    }
    contador++;
} while (numero!=dato);

 cout<< "delicidades adivino el numero "<<endl;
return 0;
 }



