#include <iostream>
#include <string>
#include <fstream>
#include "TiendaMotorin.cpp"
int main()
{
    // Declaramos tienda

    Tienda t1("MOTORIN", "AV.Brazil", "451278");

    // declaramos taller
    Taller taller1("Motos", "2 piso", "Jose", "Engrase de frenos", "2horas");
    Taller taller2("Motos", "2 piso", "Jose", "Engrase de frenos", "2horas");
    Taller taller3("Motos", "2 piso", "Jose", "Engrase de frenos", "2horas");
    Taller taller4("Motos", "2 piso", "Jose", "Engrase de frenos", "2horas");
    Taller Array_taller[] = {taller1, taller2, taller3, taller4};

    // declaramos empleados
    Empleado Ep1("Jose", "Rojas", "Limpia frenos", "4horas");
    Empleado Ep2("Jose", "Rojas", "Limpia frenos", "4horas");
    Empleado Ep3("Jose", "Rojas", "Limpia frenos", "4horas");
    Empleado Ep4("Jose", "Rojas", "Limpia frenos", "4horas");
    Empleado Array_Empleados[] = {Ep1, Ep2, Ep3, Ep4};

    // declaramos clientes
    Cliente c1("Carlos", "Salinas", "02/8/22");
    Cliente c2("Carlos", "Salinas", "02/8/22");
    Cliente c3("Carlos", "Salinas", "02/8/22");
    Cliente c4("Carlos", "Salinas", "02/8/22");
    Cliente Array_Clientes[] = {c1, c2, c3, c4};

    // declaramos repuestos
    Repuesto r1("Frenos", "01/02/20", 40, "2", 4);
    Repuesto r2("Frenos", "01/02/20", 40, "2", 10);
    Repuesto r3("Frenos", "01/02/20", 40, "2", 25);
    Repuesto r4("Frenos", "01/02/20", 40, "2", 35);
    Repuesto Array_Repuestos[] = {r1, r2, r3, r4};

    // declaramos
    ofstream archivo("1.REPORTES.txt");

    // Verificamos si el archivo se abrio correctamente
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }

    archivo << "MENU DINAMICO REPORTES" << endl;
    archivo << "1.Stock de productos" << endl;
    archivo << "2.Servicios de taller " << endl;
    archivo << "3.Repuestos vendidos" << endl;
    archivo << "4.Clientes comunes " << endl;
    archivo << endl;
    archivo << "-----------------------------------------" << endl;
    archivo << "STOCK DE PRODUCTOS" << endl;
    archivo << "-----------------------------------------" << endl;

    for (int i = 0; i < 4; i++)
    {
        archivo << Array_Repuestos[i].ImprimirRepuesto() << endl;
    }

    archivo << "-----------------------------------------" << endl;
    archivo << "SERVICIOS DEL TALLER" << endl;
    archivo << "-----------------------------------------" << endl;

    for (int i = 0; i < 4; i++)
    {
        archivo << "-" << Array_taller[i].ImprimirTaller() << endl;
    }

    archivo << "-----------------------------------------" << endl;
    archivo << "REPUESTOS VENDIDOS" << endl;
    archivo << "-----------------------------------------" << endl;

    for (int i = 0; i < 4; i++)
    {
        archivo << "-" << Array_Repuestos[i].getnombre() << "\t Vendidos:" << Array_Repuestos[i].getproductosvendidos() << endl;
    }

    archivo << "-----------------------------------------" << endl;
    archivo << "CLIENTES COMUNES" << endl;
    archivo << "-----------------------------------------" << endl;

    for (int i = 0; i < 4; i++)
    {
        archivo << i + 1 << "." << Array_Clientes[i].getnombre() << "\t Consumo de fecha:" << Array_Clientes[i].getconsumo_fecha() << endl;
    }
    return 0;
}