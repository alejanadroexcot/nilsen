
#include <iostream>
using namespace std;
// funcion para determinar si el numero es primo
void numero_primo(int numero)
{                      // utilizamos void porque no retornaremos un valor
    bool primo = true; // asumimos de base que el numero es primo
    // inicamos un for desde el 2 hasta un numero antes del numero ingresado
    for (int i = 2; i < numero; i++)
        if (numero % i == 0)
        {
            primo = false;
        } // si es divisible por uno de estos deja de ser primo
    // imprimos le resultado con el if y el else
    if (primo)
    {
        cout << "El numero es primo" << endl;
    }
    else
    {
        cout << "El numero no es primo" << endl;
    }
}
int main()
{
    int numero, *p;
    cout << "Ingresar un numero: ";
    cin >> numero;
    numero_primo(numero); // llamamos a la funcion
    p = &numero;
    cout << p; // imprimimos la direccion de memoria de el numero solicitado
    return 0;
}