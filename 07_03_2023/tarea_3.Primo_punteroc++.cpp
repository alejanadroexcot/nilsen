#include <iostream>
using namespace std;
//funcion para determinar si el numero es primo
void es_primo(int num){ //utilizamos void porque no retornaremos un valor
    bool primo = true;//asumimos de base que el numero es primo
    //inicamos un bucle desde el 2 hasta un numero antes del numero ingresado
    for(int i=2;i<num;i++)
    if(num %i==0) primo = false;//si es divisible por uno de estos deja de ser primo
    //imprimos le resultado con el if y el else
    if(primo) cout<<"El numero es primo"<<endl;
    else cout<<"El numero no es primo"<<endl;
}
int main(){
    int num,*p;
   cout<<"Ingresar un numero: ";
   cin>>num;
   es_primo(num);//llamamos a la funcion
   p = &num;
    cout<<p<<endl;//imprimimos la direccion de memoria de el numero solicitado
    cout<<*p<<endl;//imprimimos el contenido que esta almacenado en la direccion de memoria
    *p=53;//cambiamos el contenido que esta almacenado en la direccion de memoria
    cout<<*p<<endl<<num;//imprimimos para verificar que se hizo el cambio
    return 0;
}