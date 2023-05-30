#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "TiendaMotorin.cpp"
using namespace std;
int main()
{
    // Declaramos tienda

    Tienda t1("MOTORIN", "AV.Brazil", "451278");

    // declaramos taller
    Taller taller1("Servicio de mantenimiento", "2 piso", "Jose", "Engrase de frenos", "2 horas");
    Taller taller2("Reparacion de motores", "3 almacen", "Maria", "Motores internos", "4 horas");
    Taller taller3("Sistema electrico", "1 piso", "Leonardo", "Cambio de luz", "5 horas");
    Taller taller4("Neumaticos", "2 piso", "Jose", "Reparacion de ruedas", "30 de minutos");
    Taller Array_taller[] = {taller1, taller2, taller3, taller4};

    // declaramos empleados
    Empleado Ep1("Jose", "Rojas", "Limpia frenos", "4horas");
    Empleado Ep2("Mateo", "Torres", "Engrase de cadenas", "30 minutos");
    Empleado Ep3("Camila", "Fernandez", "Electricista", "3 horas");
    Empleado Ep4("Alejandro ", "Perez", "Limpieza", "5 horas");
    Empleado Array_Empleados[] = {Ep1, Ep2, Ep3, Ep4};

    // declaramos clientes
    Cliente c1("Carlos", "Salinas", "02/8/22");
    Cliente c2("Sofia ", "Castro", "01/2/23");
    Cliente c3("Daniel ", "Vargas", "04/10/21");
    Cliente c4("Luciana ", "Gomez", "08/9/20");
    Cliente Array_Clientes[] = {c1, c2, c3, c4};

    // declaramos repuestos
    Repuesto r1("Frenos", "01/02/20", 100, "2", 40);
    Repuesto r2("Cadenas", "02/03/21", 150, "3", 100);
    Repuesto r3("Morotres", "10/12/22", 75, "5", 25);
    Repuesto r4("Bujia", "01/02/23", 20, "8", 10);
    Repuesto Array_Repuestos[] = {r1, r2, r3, r4};

    int opcion_Menu;
    int Si_No;
    do
    {
        cout << "-----------------------------------------------------------------------------" << endl;
        cout << t1.imprimirTienda() << endl;
        cout << "-----------------------------------------------------------------------------" << endl;
        cout << "REPORTE DE LAS SIGUIENTES OPCIONES:" << endl;
        cout << "---------------------------------" << endl;
        cout << "1. Servicios del taller:" << endl;
        cout << "2. Clientes comunes" << endl;
        cout << "3. Stock de productos" << endl;
        cout << "4. Repuestos vendidos en la tienda" << endl;
        cout << "5. Salir" << endl;
        cout << "---------------------------------" << endl;
        cout << "Elija el numero de opcion" << endl;
        cin >> opcion_Menu;
        system("cls");

        switch (opcion_Menu)
        {
        case 1:
            cout << "---------------------------" << endl;
            cout << "Servicios de taller" << endl;
            cout << "---------------------------" << endl;

            for (int i = 0; i < 4; i++)
            {
                cout << "-" << Array_taller[i].getservicios() << endl;
            }
            cout << "Relizar reporte" << endl;
            cout << "1.si" << endl;
            cout << "2.No" << endl;
            cin >> Si_No;

            if (Si_No == 1)
            {
                // declaramos
                ofstream archivo("1.Servicios.txt");

                // Verificamos si el archivo se abrio correctamente
                if (!archivo.is_open())
                {
                    cout << "Error al abrir el archivo" << endl;
                    return 1;
                }
                archivo << "---------------------------" << endl;
                archivo << "SERVICIOS REALIZADOS" << endl;
                archivo << "---------------------------" << endl;
                for (int i = 0; i < 4; i++)
                {
                    archivo << "-" << Array_taller[i].ImprimirTaller() << endl;
                }
                cout << "REPORTE RELIZADO" << endl;
                return 0;
            }
            else if (Si_No == 2)
            {
                return 0;
            }
        case 2:
            cout << "---------------------------" << endl;
            cout << "CLIENTES" << endl;
            cout << "---------------------------" << endl;
            for (int i = 0; i < 4; i++)
            {
                cout << "-" << Array_Clientes[i].getnombre() << endl;
            }
            cout << "Relizar reporte" << endl;
            cout << "1.si" << endl;
            cout << "2.No" << endl;
            cin >> Si_No;
            if (Si_No == 1)
            {
                // declaramos
                ofstream archivo("2.Clientes.txt");

                // Verificamos si el archivo se abrio correctamente
                if (!archivo.is_open())
                {
                    cout << "Error al abrir el archivo" << endl;
                    return 1;
                }
                cout << "---------------------------" << endl;
                archivo << "CLIENTES COMUNES" << endl;
                cout << "---------------------------" << endl;

                for (int i = 0; i < 4; i++)
                {
                    archivo << Array_Clientes[i].imprimirCliente() << endl;
                }
                cout << "REPORTE RELIZADO" << endl;
                return 0;
            }
            else if (Si_No == 2)
            {
                return 0;
            }
        case 3:
            cout << "--------------------------------" << endl;
            cout << "Stock de productos" << endl;
            cout << "--------------------------------" << endl;
            for (int i = 0; i < 4; i++)
            {
                cout << Array_Repuestos[i].getnombre() << endl;
            }
            cout << "Relizar reporte" << endl;
            cout << "1.si" << endl;
            cout << "2.No" << endl;
            cin >> Si_No;
            if (Si_No == 1)
            {
                // declaramos
                ofstream archivo("3.Productos.txt");

                // Verificamos si el archivo se abrio correctamente
                if (!archivo.is_open())
                {
                    cout << "Error al abrir el archivo" << endl;
                    return 1;
                }

                archivo << "-------------------------------------------------------------------" << endl;
                archivo << "STOCK DE PRODUCTOS POR FECHA DE REGISTRO, CANTIDAD Y CATEGORIA" << endl;
                archivo << "-------------------------------------------------------------------" << endl;

                for (int i = 0; i < 4; i++)
                {
                    archivo << "-" << Array_Repuestos[i].ImprimirRepuesto() << endl;
                }
                cout << "REPORTE RELIZADO" << endl;
                return 0;
            }
            else if (Si_No == 2)
            {
                return 0;
            }

        case 4:
            cout << "-------------------------------------------------------------------" << endl;
            cout << "REPUESTOS DE LA TIENDA" << endl;
            cout << "-------------------------------------------------------------------" << endl;
            for (int i = 0; i < 4; i++)
            {
                cout << "-" << Array_Repuestos[i].getnombre() << endl;
            }
            cout << "Realizar reporte?" << endl;
            cout << "1.si" << endl;
            cout << "2.No" << endl;
            cin >> Si_No;
            if (Si_No == 1)
            {

                // declaramos
                ofstream archivo("4.Ventas.txt");

                // Verificamos si el archivo se abrio correctamente
                if (!archivo.is_open())
                {
                    cout << "Error al abrir el archivo" << endl;
                    return 1;
                }
                archivo << "-------------------------------------------------------------------" << endl;
                archivo << "VENTAS DE REPUESTOS " << endl;
                archivo << "-------------------------------------------------------------------" << endl;
                for (int i = 0; i < 4; i++)
                {
                    archivo << "-" << Array_Repuestos[i].getnombre() << "----------->Ventas: " << Array_Repuestos[i].getproductosvendidos() << "----------->Fecha de registro:" << Array_Repuestos[i].getfechaRegistro() << endl;
                }
                cout << "REPORTE RELIZADO" << endl;
                return 0;
            }
            else if (Si_No == 2)
            {
                return 0;
            }

        default:
            break;
        }
    } while (opcion_Menu != 5);
    return 0;
}