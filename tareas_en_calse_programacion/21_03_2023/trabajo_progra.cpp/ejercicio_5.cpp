
/*Escriba un programa que simule una calculadora con funciones básicasde suma, resta, divisióny multiplicación,  el usuario deberáescoger que operaciónva a realizar 
*/
#include<iostream>
using namespace std;
int suma(int a, int b )//creamos una funcion llamada suma,por eso determinamos  variables ay b
{
    int c = a+b;// c  se utilizara para asiganarla a+b
    return c ;// ya que c le asignamos  , tambien sera nuestro resultado
}
int resta(int a, int b )//creamos una funcion llamada resta,por eso determinamos   variables a y b
{
    int c = a-b;// c  se utilizara para asiganarla a+b
    return c ;// ya que c le asignamos  , tambien sera nuestro resultado
}
int divicion(int a, int b )//creamos una funcion llamada divicion,por eso de determinamos variables a y b
{
    int c = a/b;// c  se utilizara para asiganarla a+b
    return c ;// ya que c le asignamos  , tambien sera nuestro resultado
}
int multiplicacion(int a, int b )//creamos una funcion llamada multiplicacion,por eso  determinamos variables a y b
{
    int c = a*b;// c  se utilizara para asiganarla a+b
    return c ;// ya que c le asignamos  , tambien sera nuestro resultado
}
int main(){
    cout<<"ingrese una opcion: "<<endl;//nos dejara selecionar una de las 4 opciones
    cout<<" 1. suma "<<endl;
    cout<<" 2. resta"<<endl;
    cout<<" 3. divicion"<<endl;
    cout<<" 4. multiplicacion"<<endl;
    int opcion;
    int valor1=0,valor2=0,resultado=0;
    cin>> opcion;//leremos cual opcion eligio
    switch (opcion)//va a elejir cual caso sera para que seleccione  un detreminado case
    {
    case 1:
        cout<<"ingrese el primer valor"<<endl;
        cin>>valor1;
        cout<<"ingerese el segundo valor"<<endl;
        cin>>valor2;
        resultado=suma(valor1,valor2);
        cout<<"el resultado de la suma es :"<<resultado; 
        break;
    
    case 2:
        cout<<"ingrese el primer valor"<<endl;
        cin>>valor1;
        cout<<"ingerese el segundo valor"<<endl;
        cin>>valor2;
        resultado=resta(valor1,valor2);
        cout<<"el resultado de la resta es :"<<resultado; 
        break;
     case 3:
        cout<<"ingrese el primer valor"<<endl;
        cin>>valor1;
        cout<<"ingerese el segundo valor"<<endl;
        cin>>valor2;
        resultado=divicion(valor1,valor2);
        cout<<"el resultado de la divicion es :"<<resultado; 
        break;
    case 4:
        cout<<"ingrese el primer valor"<<endl;
        cin>>valor1;
        cout<<"ingerese el segundo valor"<<endl;
        cin>>valor2;
        resultado=multiplicacion(valor1,valor2);
        cout<<"el resultado de la multiplicacion es :"<<resultado; 
        break;
    
    default://si no elige ni una opcion del rango de[1-4] se ejecutara este "cout"
     cout<<"opcion no valida";
        break;
    }
    return 0;
}