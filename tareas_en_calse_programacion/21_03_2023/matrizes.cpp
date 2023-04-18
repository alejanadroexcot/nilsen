#include <iostream>
using namespace std;

// Declaración de funciones
// funcione para la suma de la matriz
void Suma_matriz(int matriz[5][5], int fila, int columna)
{
    int suma = 0;
    for (int i = 0; i < fila; i++)//ulizamos un for anilado para la suma de nuestra matriz
    {
        for (int j = 0; j < columna; j++)
        {
            suma += matriz[i][j];
        }
    }
    cout << "La suma de todos los elementos de la matriz es: " << suma << endl;
}

void Mostrar_matriz(int matriz[5][5], int fila, int columna)// con esta funcion imprimimos la matriz
{
    cout << "Matriz original" << endl;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }
}
// funcion para la suma de las filas de matriz
void Suma_fila(int matriz[5][5], int fila, int columna)
{
    int suma_fila;
    cout << "SUMA DE LAS FILAS: " << endl;
    for (int i = 0; i < fila; i++)
    {
        int suma_fila=0;
        for (int j = 0; j < columna; j++)
        {
            suma_fila = suma_fila + matriz[i][j];
        }
        cout << "Matriz [" << i << "]: " << suma_fila << endl;
    }
}
// funcion para sumar las columnas
void Suma_columna(int matriz[5][5], int fila, int columna)
{
    int suma_columna;
    cout << "SUMA DE LAS COLUMNAS: " << endl;
    for (int i = 0; i < fila; i++)
    {
        int suma_columna = 0;
        for (int j = 0; j < columna; j++)
        {
            suma_columna = suma_columna + matriz[j][i];
        }
        cout << "Matriz [" << i << "]: " << suma_columna << endl;
    }
}
// funcion para hallar el valor maximo
void Valor_maximo(int matriz[5][5], int fila, int columna)
{
    int valor_maximo = matriz[0][0];
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            if (matriz[i][j] > valor_maximo)
            {
                valor_maximo = matriz[i][j];// este actualiza el valor maximos hasta que sea menos que el valor maximos
            }
        }
    }
    cout << "El valor maximo de la matriz es: " << valor_maximo << endl;
}
// funcion para hallar el valor minimo en la matriz
void Valor_minimo(int matriz[5][5], int fila, int columna)
{
    int valor_minimo = matriz[0][0];
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            if (matriz[i][j] < valor_minimo)
            {
                valor_minimo = matriz[i][j];
            }
        }
    }
    cout << "El valor minimo de la matriz es :" << valor_minimo << endl;
}
// funcion para hallar el promedio de la matriz
void Promedio_matriz(int matriz[5][5], int fila, int columna)
{
    int suma_matriz = 0;
    float promedio_matriz = 0;
    int tamanio = fila * columna;//calcula el tamanio de la matriz

    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            suma_matriz = suma_matriz + matriz[i][j];//
        }
    }
    promedio_matriz = suma_matriz / tamanio;
    cout << "El promedio de la matriz es: " << promedio_matriz << endl;
}
//funcion para el promedio de las filas
void Promedio_filas(int matriz[5][5], int fila, int columna)
{
    int suma_filas = 0;
    cout<<"PROMEDIOS DE LAS FILAS: "<<endl;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            suma_filas = suma_filas + matriz[i][j];
        }
        float promedio = suma_filas / columna;
        cout << "Fila [" << i << "] : " << promedio << endl;
    }
}
//funcion para el promedio de las columnas
void Promedio_columnas(int matriz[5][5], int fila, int columna)
{
    int suma_columnas = 0;
    cout<<"PROMEDIO DE LAS COLUMNAS: "<<endl;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            suma_columnas = suma_columnas + matriz[i][j];
        }
        float promedio = suma_columnas / fila;
        cout << "Columna [" << i << "] : " << promedio << endl;
    }
}

// funcion para invertir la matriz
void Invertir_matriz(int matriz[5][5], int fila, int columna)
{
    int matriz_invertida[5][5];
    cout << "MATRIZ INVERTIDA:" << endl;
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            cout << matriz[j][i] << "\t";
        }
        cout << "\n";
    }
}

// funcion principal
int main()
{
    int columna = 5, fila = 5;
    // Declarar e inicializar la matriz
    int matriz[5][5] = {{25,24,23,22,21}, {20,19,18,17,16}, {15,14,13,12,11}, {10,9,8,7,6},{5,4,3,2,1}};

    // Llamada a la función
    Suma_matriz(matriz, fila, columna);
    Mostrar_matriz(matriz, fila, columna);
    Suma_fila(matriz, fila, columna);
    Suma_columna(matriz, fila, columna);
    Valor_maximo(matriz, fila, columna);
    Valor_minimo(matriz, fila, columna);
    Promedio_matriz(matriz, fila, columna);
    Promedio_filas(matriz,fila,columna);
    Promedio_columnas(matriz,fila,columna);
    Invertir_matriz(matriz,fila,columna);
     return 0;
}