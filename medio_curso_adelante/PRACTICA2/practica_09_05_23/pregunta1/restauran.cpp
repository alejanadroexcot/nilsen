/*pregunta 01
Elabore un sistema para restaurantes que contenga como atributos nombre, direccion, menu del dia
ventas por delivery y ventas en mesa, asi mismo cree una clase plato del dia que contenga como atributos
el nombre del plato, el costo por plato y la cantidad de platos del dia, se le pide que haga una simulacion de ventas por delivery
y en mesa e imprima un reporte, asi mismo debe implementarse que por cada atencion descuente el numero de platos del menu

considetar diagrama de clases*/
#include <iostream>
#include <string>
#include "plato_del_dia.cpp"
using namespace std;
class restaurant:Platodeldia

{
private:
    // double costo
    // int cantodad

    string nombre;
    int direccion;
    Platodeldia platoDelDia;
    int ventasDelivery;
    int ventasMesa;
    /* string nombre;
     int direcion;
     string plato_del_dia;
     string venta_delivery=0;
     string ventas_mesa=0;*/
public:
    restaurant(string _nombre = "", int _direccion, Platodeldia platoDelDia, string _ventasDelivery = "", string _ventasMesa = ""):Platodeldia( string _nombre, string _costo,int _cantidad)
    {
         nombre = nombre;
    direccion = direccion;
        platoDelDia = platoDelDia;
        ventasDelivery = 0;
        ventasMesa = 0;
    }
    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    int getDirecion()
    {
        return direccion;
    }
    void setDirecion(int _direcion)
    {

        direccion = _direcion;
    }
    Platodeldia getplatoDelDia()
    {
        return platoDelDia;
    }

    int getVentasDelivery()
    {
        return ventasDelivery;
    }

    int getVentasMesa()
    {
        return ventasMesa;
    }
    void venderDelivery(int cantidad)
    {
        platoDelDia.reducirCantidad(cantidad);
        ventasDelivery += cantidad;
    }

    void venderMesa(int cantidad)
    {
        platoDelDia.reducirCantidad(cantidad);
        ventasMesa += cantidad;
    }
}
/*void setVenta_delivery(string _Venta_delivery){
    venta_delivery= _venta_delivery;

}
string getVentas_de_mesa(){
    return ventas_mesa;
}
void setVentas_mesa(string _ventas_mesa){
    ventas_mesa =_ventas_mesa;

}*/
}
;
