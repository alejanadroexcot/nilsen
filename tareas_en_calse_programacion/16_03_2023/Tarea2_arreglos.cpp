//declarar un recorrido para el usuario ingrese los libros 
//imprimir arreglo
#include <iostream>
using namespace std;

int main(){
    string libros[5]; //creamos un arreglo de 5 elementos
    int tamanio= sizeof(libros)/sizeof(libros[0]);//creamos un sizeof para saber el tamaño del arreglo
   
   //creamos un for para solicitar los nombres de los libros
   for(int i=0;i<tamanio;i++){
     cout<<"Ingrese el titulo de algun libro"<<endl;
     cin>>libros[i];
   }

    cout<<"Los libros almacenados son:"<<endl;
   //este for es para imprimir el arreglo con el nombre de cada libro
   for(int i=0;i<tamanio;i++){
    
     cout<<"El arreglo ["<<i<<"] "<<libros[i]<<endl;
    }
    return 0;
}