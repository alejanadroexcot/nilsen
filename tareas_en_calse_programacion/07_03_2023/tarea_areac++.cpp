#include <iostream>
using namespace std;
//creamos una funcion para sacar el area 
int area_funcion(int base, int altura){//para ello necesitaremos el area y la altura
 int operacion =0;//creamos la variable operacion
 operacion=base*altura;//en la variable operacion se pondra la multipliacion de base por altura
 return operacion;//retornamos operacion
}
//creamos esta funcion para sacar el perimtro
int perimetro_funcion(int base, int altura){//para ello necesitaremos el area y la altura
    int operacion=0;//creamos la variable operacion
    operacion=(base+altura)*2;//en la variable operacion pondremos la suma de base + altura y el resultado * 2
return operacion;//retornamos operacion
}
int main ()
{
    int base,altura,area,perimetro;
    cout<<"Ingrese la base"<<endl;//pedimos que ingrese la base
    cin>>base;
    cout<<"Ingrese la altura"<<endl;//pedimos que ingrese la altura
    cin>>altura;
    area=area_funcion(base,altura);//aca llamamos a la funcion [area_funcion] y le ponemos como area
    perimetro=perimetro_funcion(base,altura);//aca llamamos ala funcion [perimetro_funcion] y le ponemos como perimetro
    cout<<"El perimetro de este rectangulo es "<<perimetro<<endl;//imprimimos el premitro 
    cout<<"El area de ese rectangulo es " <<area;//imprimimos el area
    return 0;
}
