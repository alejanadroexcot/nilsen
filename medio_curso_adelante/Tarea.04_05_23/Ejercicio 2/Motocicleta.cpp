#include <iostream>
#include <string>
#include "Vehiculo.cpp"
using namespace std;
class Motocicleta : Vehiculo
{
private:
    string color_motocicleta;
    string marca_motocicleta;

public:
    Motocicleta(string _color_motocicleta = "", string _marca_motocicleta = "", string _cilindrica_motor = "", int _nun_asientos = 0, int _num_ruedas = 0, int _num_puertas = 0, bool _certificacion_seguridad) : Vehiculo(_cilindrica_motor, _nun_asientos, _num_ruedas, _num_puertas)
    {
        color_motocicleta = _color_motocicleta;
        marca_motocicleta = _marca_motocicleta;
    }
    string getColor_motocicleta()
    {
        return color_motocicleta;
    }
    void setcolor_motocicleta(string _color_motocicleta)
    {
        color_motocicleta = _color_motocicleta;
    }
    string getMarca_motocicleta()
    {
        return marca_motocicleta;
    }
    void setMarca_motocicleta(string _marca_motocicleta)
    {
        marca_motocicleta = _marca_motocicleta;
    }
};