#include <iostream>
using namespace std;
class Vehiculo
{
private:
    string cilindrica_motor;
    int nun_asientos;
    int num_ruedas;
    int num_puertas;
    bool certificacion_seguridad;

public:
    Vehiculo(string _cilindrica_motor = "", int _nun_asientos = 0, int _num_ruedas = 0, int _num_puertas = 0, bool _certificacion_seguridad)
    {
        cilindrica_motor = _cilindrica_motor;
        nun_asientos = _nun_asientos;
        num_ruedas = _num_ruedas;
        num_puertas = _num_puertas;
        certificacion_seguridad = _certificacion_seguridad;
    }
    string getCilindrica_motor()
    {
        return cilindrica_motor;
    }
    void setCilindrica_motor(string _cilindrica_motor)
    {
        cilindrica_motor = _cilindrica_motor;
    }
    int getNun_asientos()
    {
        return nun_asientos;
    }
    void setnun_asientos(int _nun_asientos)
    {
        nun_asientos = _nun_asientos;
    }
    int getnum_puertas()
    {
        return num_puertas;
    }
    void setNum_puertas(int _num_puertas)
    {
        num_puertas = _num_puertas;
    }
    bool getCertificacion_seguridad()
    {
        return certificacion_seguridad;
    }
};