#include <iostream>
using namespace std;

float Notas(float a, float b, float c)
{                           // creamos la funcion Notas para esto necesitaremos las variables a,b,c
    float suma;             // creamos la variable suma
    suma = (a + b + c) / 3; // la suma de a+b+c entre 3 esto es = suma
    return suma;
}
int rango(float promedio)
{              // creamos la funcion rango para ello llamamos al dato promedio
    int v = 0; // creamos una variable v
    if (promedio >= 18)
    {          // hacemos una comparacion que si promedio es mayor igual a 18 entonces
        v = 1; // sale este valor
    }
    if (promedio < 18 and promedio > 15)
    {          // hacemos la comparacion que si el dato es menor que 18 y mayor que 15 entonces
        v = 2; // sale este valor
    }
    if (promedio <= 15 and promedio > 11)
    {          // hacemos la comparacion que si el dato es menor igual que 15 y mayor que 11 entonces
        v = 3; // sale este valor
    }
    if (promedio <= 11 and promedio > 5)
    {          // hacemos la comparacion que si el dato es menor igual que 11 y mayor que 5 entonces
        v = 4; // sale este valor
    }
    if (promedio < 5)
    {          // hacemos la compracion si el dato es menor de 5 entonces
        v = 5; // sale este valor
    }
    return v;
}

int main()
{
    float a, b, c;
    float promedio;
    int operacion;
    // imprimimos "introduce tu primera nota" y lo que introducimos se va a la variable a, luego a la b y ultimo a c
    cout << "introduce tu primera nota" << endl;
    cin >> a;
    cout << "introduce tu segunda nota" << endl;
    cin >> b;
    cout << "introduce tu tercera nota" << endl;
    cin >> c;
    promedio = Notas(a, b, c);   // llamamos la funcion notas y le renombramos como promedio
    cout << promedio << endl;    // imprimimos el promedio
    operacion = rango(promedio); // llamamos a la funcion rango y la renombramos como operacion

    switch (operacion) // con la variable operacion hacemos el siguiente switch
    {
    case 1: // si el valor es 1 se ejecuta
        cout << "A";
        break;

    case 2: // si el valor es 2 se ejecuta
        cout << "B";
        break;

    case 3: // si el valor es 3 se ejecuta
        cout << "C";
        break;

    case 4: // si el valor es 4 se ejecuta
        cout << "F";

        break;

    case 5: // si el valor es 5 se ejecuta
        cout << ":(  G";
        break;
    }
    return 0;
}
