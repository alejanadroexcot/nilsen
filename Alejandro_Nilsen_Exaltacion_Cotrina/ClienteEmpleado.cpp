#include <iostream>
#include <string>
using namespace std;
class Cliente
{
private: // atributos
    string nombre;
    string apellido;
    string consumo_fecha;

public:
    // metodos y funciones
    Cliente(string _nombre = "", string _apellido = "", string _consumo_fecha = "")
    {
        nombre = _nombre;
        apellido = _apellido;
        consumo_fecha = _consumo_fecha;
    }
    string getnombre()
    {
        return nombre;
    }
    string getapellido()
    {
        return apellido;
    }
    string getconsumo_fecha()
    {
        return consumo_fecha;
    }
    string imprimirCliente()
    {
        return "Nombre:" + getnombre() + "------------->Apellido:" + getapellido() + "------------->Fecha de compra:" + getconsumo_fecha();
    }
};
class Empleado
{
private: // atributos
    string nombre;
    string apellido;
    string puesto;
    string tiempo;

public:
    // metodos y funciones
    Empleado(string _nombre = "", string _apellido = "", string _puesto = "", string _tiempo = "")
    {
        nombre = _nombre;
        apellido = _apellido;
        puesto = _puesto;
        tiempo = _tiempo;
    }
    string getnombre()
    {
        return nombre;
    }
    string getapellido()
    {
        return apellido;
    }
    string getpuesto()
    {
        return puesto;
    }
    string gettiempo()
    {
        return tiempo;
    }
    string ImprimirEmpleado()
    {
        return "Nombre: " + getnombre() + "------------->Apellido:" + getapellido() + "------------->Puesto:" + getpuesto() + "------------->Tiempo:" + gettiempo();
    }
};