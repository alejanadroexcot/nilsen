#include <iostream>
#include <string>
using namespace std;
class Repuesto
{
private: // atributos
    string nombre;
    string fechaRegistro;
    int cantidad;
    string categoria;
    int productosvendidos;

public:
    // metodos y funciones
    Repuesto(string _nombre = "", string _fechaRegistro = "", int _cantidad = 0, string _categoria = "", int _productosvendidos = 0)
    {
        nombre = _nombre;
        fechaRegistro = _fechaRegistro;
        cantidad = _cantidad;
        categoria = _categoria;
        productosvendidos = _productosvendidos;
    }
    string getnombre()
    {
        return nombre;
    }
    string getfechaRegistro()
    {
        return fechaRegistro;
    }
    int getcantidad()
    {
        return cantidad;
    }
    string getcategoria()
    {
        return categoria;
    }
    int getproductosvendidos()
    {
        return productosvendidos;
    }
    string ImprimirRepuesto()
    {
        return getnombre() + "------------->Fecha de registro:" + getfechaRegistro() + "------------->Cantidad: " + to_string(getcantidad()) + "------------->Categoria: " + getcategoria();
    }
};