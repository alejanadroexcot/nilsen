
/*Escribir un programa que implemente una pila y una cola utilizando una lista enlazada y realice algunas operaciones básicas con ellas 
*/
#include<iostream>
#include<queue>//incluimos las bibliotecas de colas
#include<stack>//incluimos las bibliotecas de pilas
using namespace std;
int main (){

    stack<int>pila;
    queue<int>cola; //ingresamos las pilas requeridas
    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);
    pila.push(5);
    pila.push(6);
    pila.push(7);
    pila.push(8);
    pila.push(9);
    pila.push(10);
    int tempo;
    while (!pila.empty())//demostramos el contenido de pila
    {
        tempo=pila.top();
        pila.pop();
        cola.push(tempo);
    }
    
while (!cola.empty())

{

 cout<<cola.front()<<endl;

 cola.pop();

}
 return 0;    

}