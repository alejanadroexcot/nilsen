#include <iostream>
#include <string>
#include "Repuesto.cpp"
#include "ClienteEmpleado.cpp"
#include "Taller.cpp"
using namespace std;
class Tienda
{
private:
    string nombre;
    string direccion;
    string ruc;

public:
    Tienda(string _nombre = "", string _direccion = "", string _ruc = "")
    {
        nombre = _nombre;
        direccion = _direccion;
        ruc = _ruc;
    }
    string getnombre()
    {
        return nombre;
    }
    string getdireccion()
    {
        return direccion;
    }
    string getruc()
    {
        return ruc;
    }
    string imprimirTienda()
    {
        return "Nombre: " + getnombre() + "------------->Direcion: " + getdireccion() + "------------->RUC: " + getruc();
    }
};