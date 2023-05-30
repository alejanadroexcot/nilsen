#include <iostream>
#include <string>
using namespace std;
class Taller
{
private: // atributos
    string nombre;
    string ubicacion;
    string tecnico;
    string servicios;
    string tiempo;

public:
    Taller(string _nombre = "", string _ubicacion = "", string _tecnico = "", string _servicios = "", string _tiempo = "")
    {
        nombre = _nombre;
        ubicacion = _ubicacion;
        tecnico = _tecnico;
        servicios = _servicios;
        tiempo = _tiempo;
    }
    string getnombre()
    {
        return nombre;
    }
    string getubicacion()
    {
        return ubicacion;
    }
    string gettecnico()
    {
        return tecnico;
    }
    string getservicios()
    {
        return servicios;
    }
    string gettiempo()
    {
        return tiempo;
    }

    string ImprimirTaller()
    {
        return getservicios() + "\t Realiza: " + gettecnico() + "\t Tiempo: " + gettiempo();
    }
};