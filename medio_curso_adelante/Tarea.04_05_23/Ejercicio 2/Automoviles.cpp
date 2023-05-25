#include <iostream>
#include <string>
#include "Vehiculo.cpp"
using namespace std;
class Automoviles : Vehiculo
{
protected:
    string color_automovil;
    string marca_automovil;

public:
    Automoviles(string _color_automovil = "", string _marca_automovil = "", string _cilindrica_motor = "", int _nun_asientos = 0, int _num_ruedas = 0, int _num_puertas = 0, bool _certificacion_seguridad) : Vehiculo()
    {
        color_automovil = _color_automovil;
        marca_automovil = _marca_automovil;
    }
    string getColor_automovil()
    {
        return color_automovil;
    }
    void setColor_automovil(string _color_automovil)
    {
        color_automovil = _color_automovil;
    }
    string getMarca_automovil()
    {
        return marca_automovil;
    }
    void setmarca_automovil(string _marca_automovil)
    {
        marca_automovil = _marca_automovil;
    }
    
};