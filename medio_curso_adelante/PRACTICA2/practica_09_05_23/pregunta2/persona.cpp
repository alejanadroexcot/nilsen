/*pregunta 02
implemente un clase estudiante investigador con herencia multiple, persona e investigador, asi mismo el estudiante 
debe pertenecer 
a una facultad, y a un semestre, las investigaciones que realiza el estudiante es por semestre, se debe imprimir un reporte
de investigaciones por estudiante y semestre
imprima como minimo para dos personas

considerar diagrama de clases hhh*/
#include <iostream>
#include <string>

class Persona
{
    private:
    int nombre;
    int edad;
public:
    Persona(int _nombre, int _edad) {
     nombre = _nombre;
        edad = _edad;
    }
int getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }


};
