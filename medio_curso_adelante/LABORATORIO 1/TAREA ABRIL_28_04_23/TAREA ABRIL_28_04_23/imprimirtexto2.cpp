#include <iostream>
#include <string>
#include <fstream> //libreira para archivos
// #include "facultad_01.cpp"
#include "Estudiante.cpp"

using namespace std;
int main()
{
    // crear facultades
    Facultad facu1("001", "Facultad de Ingenieria en Informatica y Sistemas", "FIIS");
    Facultad facu2("002", "Facultad de de Zootecnia", "FZ");

    // Estudiantes de FIIS
    Estudiante est1("2023000001", "juanito.perez@unas.edu.pe", "perez", "juanito", "44444444");
    est1.setFacultad(facu1);
    Estudiante est2("20220456", "jose.caldas@unas.edu.pe", " jose", "caldas", "234567");
    est2.setFacultad(facu1);
    Estudiante est3("20223457", "carlos.solar@unas.edu.pe", " carlos", "solar", "345678");
    est3.setFacultad(facu1);
    Estudiante est4("20223412", "marco.palacios@unas.edu.pe", "marco", "palacios", "3457177");
    est4.setFacultad(facu1);
    // Estudiantes de ZOOTECNIA
    Estudiante est5("2020007", "manuel.lopez@unas.edu.pe", "lopez", "manuel", "20458771");
    est5.setFacultad(facu2);
    Estudiante est6("2000485", "therry.exaltacion@unas.edu.pe", "exaltacion", "therry", "2024575");
    est6.setFacultad(facu2);
    Estudiante est7("20220050", "krystal.exaltacion@unas.edu.pe", "exaltacion", "krystal", "87541558");
    est7.setFacultad(facu2);
    Estudiante est8("2022002", "jose.martinez@unas.edu.pe", "mantinez", "jose", "73463283");
    est8.setFacultad(facu2);
    // crear cursos
    Curso curs_1("0001", "Programacion Basica", 4);
    Curso curs_2("0002", "Diseño de BD", 3);
    Curso curs_3("0003", "Sotfware I", 3);
    Curso curs_4("0004", "Sotfware II", 4);
    Curso curs_5("0005", "Gestion de procesos", 4);
    // cursos de zootecnia
    Curso curs_6("0006", "Nutricion animal", 4);
    Curso curs_7("0007", "Ecosistemas menores", 3);
    Curso curs_8("0008", "Microbiologia animal", 3);
    Curso curs_9("0009", "Zoologia aplicada", 4);
    Curso curs_10("0010", "Morfologia animal", 4);

    Estudiante n_estudiantes[] = {est1, est2, est3, est4, est5, est6, est7, est8};
    int valor = sizeof(n_estudiantes) / sizeof(n_estudiantes[0]);
    //declaramos nombre del archivo como "curso.txt"
    ofstream archivo("estudiantes_Facultades.txt");
    // vereficamos si el archivo se abrio correctamente
    Facultad num_facultades[] = {facu1,facu2};
    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    
    }
    
 archivo << "Datos de los estudiantes: \n";

    archivo << num_facultades[0].toString() << endl;

    for (int i = 0; i < valor; i++)
    {
        if (n_estudiantes[i].getFacultad().getSigla() == "FIIS")
        {
            archivo << n_estudiantes[i].toString() << endl;
        }
    }
    //
    archivo << num_facultades[1].toString() << endl;
    
    for (int i = 0; i < valor; i++)
    {
        if (n_estudiantes[i].getFacultad().getSigla() == "FZ")
        {
            archivo << n_estudiantes[i].toString() << endl;
        }
    }
    archivo.close();


    return 0;
}