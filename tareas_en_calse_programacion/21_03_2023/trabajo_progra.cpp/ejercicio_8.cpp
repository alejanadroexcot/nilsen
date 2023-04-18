
/*escriba un programa que solicite el ingreso de 3 notas al usuario, y luego que calcule el promedio de las notas
*/
#include<iostream>
using namespace std;
float notas(float a, float b, float c){//
  float suma;//creamos la variable suma
  suma=(a+b+c)/3;// la suma de a+b+c/3 es igual a suma
    return suma;
}


int main(){

    float a,b,c;
    float promedio;
    cout<<"ingrese su primera nota: ";
    cin>>a;
    cout<<"ingrese su segunda nota: ";
    cin>>b;
    cout<<"ingrese su tercera nota: ";
    cin>>c;
    promedio=notas(a,b,c);// llamamos a nuestra funcion
    cout<<"su promedio general es "<<promedio<<endl;

 }


     
      
    