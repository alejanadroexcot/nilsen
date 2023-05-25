/*pregunta 01
Elabore un sistema para restaurantes que contenga como atributos nombre, direccion, menu del dia
ventas por delivery y ventas en mesa, asi mismo cree una clase plato del dia que contenga como atributos 
el nombre del plato, el costo por plato y la cantidad de platos del dia, se le pide que haga una simulacion de ventas por delivery
y en mesa e imprima un reporte, asi mismo debe implementarse que por cada atencion descuente el numero de platos del menu

considetar diagrama de clases*/
#include<iostream>
#include<string>
using namespace std;
class Platodeldia
{
private :
string nombre;
string costo;// double
int cantidad;
public:
Platodeldia( string _nombre, string _costo,int _cantidad){ 
 nombre = _nombre;
 costo  = _costo;
 cantidad  = _cantidad;
 }
 string getNombre(){
    return nombre;

 }
 void setNombre(string _nombre){
   nombre= _nombre
 
 }

 void reducirCantidad (int _cantidad){
    cantidad-= _cantidad;
 }
} ;