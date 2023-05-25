#include <iostream>
#include <string>
#include <fstream>
#include "Departamento.cpp"
using namespace std;
int main()
{
    // Crear empleados
    Empleado Empleado1("gerente", 2.500, "10", "Juan", "Perez", "22997412", "10/11/90", 40);
    Empleado Empleado2("Anlista", 950, "5", "Maria", "Lopez", "228874", "2/7/80");
    Empleado Empleado3("Investigador", 5000, "8", "Jose", "Benavides", "2244578", "5/10/95", 24);
    Empleado Empleado4("Contador", 5412, "4", "Pepito", "acharte", "254754", "8/1/97", 20);
    Empleado Empleado5("Abogado", 4121, "8", "Jose", "Ugarte", "4545421", "5/10/95", 27);
    Empleado Empleado6("Secretaria", 4000, "2", "Jose", "Herrera", "2245785", "5/10/95", 30);
    Empleado Empleado7("Ingeniero", 3000, "3", "Angel", "Benitez", "2257845", "1/10/95", 35);
    Empleado Empleado8("Minero", 5000, "5", "Dulce", "Coz", "452114", "5/10/95", 20);
    Empleado Empleado9("Economista", 1000, "6", "felipe", "", "224785", "2/15/95", 19);
    Empleado Empleado10("Enfermera", 5500, "7", "Sofia", "hernandez", "214653", "6/24/79", 40);

    // Crear departamentos
    Departamento departamento1("Departamento de Ventas", "DV");

    // crear lista de empleados
    Empleado Empleados[10] = {Empleado1, Empleado2, Empleado3, Empleado4, Empleado5, Empleado6, Empleado7, Empleado8, Empleado9, Empleado10};
    // hallar el tamanho de empleados
    int tamanio_empleados = sizeof(Empleados) / sizeof(Empleados[0]);

    // declaramos
    ofstream archivo("Reporte departamento.txt");

    // Verificamos si el archivo se abrió correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    //
    archivo << "-----------------------------------------------------------------------" << endl;
    archivo << departamento1.toString2() << endl;
    archivo << "-----------------------------------------------------------------------" << endl;
    archivo << "Datos de los empleados: \n ";
    // imprimimos los empleados
    for (int i = 0; i < tamanio_empleados; i++)
    {
        archivo << Empleados[i].toString() << endl;
    }

    archivo.close();
    return 0;
}