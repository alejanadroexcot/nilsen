#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int tamanio = sizeof(a) / sizeof(a[0]); // creamos tamanio con el tamaño del arreglo
    // se hace un bucle para solicitar los datos y ponerlos en su respectivo arreglo
    for (int i = 0; i < tamanio; i++)
    {
        cout << "ingrese los valores del arreglo [" <<i<<"]"<< endl;
        cin >> a[i];
    }
    // Esto lo hicimos para poder observar los valores que se habian asignado
    //  for (int i = 0; i < tamanio; i++)
    //{
    //      cout << endl
    //           << "los valores son " << a[i] << endl;
    //  }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //NUMERO MENOR
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // este for es para poder sacar el numero menor del arreglo
    int menor = a[0];                 // asigamos la variable menor como a[0]
    for (int i = 1; i < tamanio; i++) // ponemos que el for comience en 1 porque el 0 ya lo tenemos asignado
    {
        if (a[i] < menor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "menor" que a[0] osea la variable menor
        {
            menor = a[i]; // el arreglo que cumpla esta condicion se convierte en el nuevo menor
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //NUMERO MAYOR 
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // este for es para poder sacar el numero mayor del arreglo
    int mayor = a[0]; // asigamos la variable mayor como a[0]
    for (int i = 1; i < tamanio; i++)// ponemos que el for comience en 1 porque el 0 ya lo tenemos asignado
    {
        if (a[i] > mayor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "mayor" que a[0] osea la variable mayor
        {
            mayor = a[i]; // el arreglo que cumpla esta condicion se convierte en el nuevo mayor
        }
    }
    // imprimimos cada variables de los for anteriores
    cout << "el numero menor es " << menor << endl;
    cout << "el numero mayor es " << mayor << endl;
    cout << "los numeros que se repiten en el arreglo son: "; // imprimimos esto para el siguiente for

    // este for lo usamos para saber que numeros se repiden en el arreglo
    for (int i = 0; i < tamanio - 1; i++)//hacemos que comienze desde 0 hasta tamanio -1 
    //para que no se haga el recorrido hasta el ultimo
    {
        for (int j = i + 1; j < tamanio; j++)//con este for hacemos que comienze de i+1 osea de tamanio para que se haga
        //el recorrido hasta el ultimo 
        {
            if (a[i] == a[j])//con este if hacemos la comparacion si el a[i] es igual que a[j]
            {
                cout << a[i] << " ";//si se cumple el if se escribe el valor a[i] que se repite
                break;// esto es para que finalice el bucle
            }
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // MENOR A MAYOR
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < tamanio; i++)//hacemos que comienze desde 0 hasta tamanio
   
    {
        for (int j = 0; j < tamanio - 1; j++)//con este for hacemos que comience desde 0 hasta tamanio-1
         //para que no se haga el recorrido hasta el ultimo
        {
            if (a[j] > a[j + 1])//hacemos la comparacion de que a[j] sea mayor que a[j+1] si esto se cumple se ejecuta lo siguiente
            {
                int tempo = a[j];//creamos una variable tempo y le asiganamos el a[j]
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de menor a mayor es: ";

    for (int i = 0; i < tamanio; i++)
    {
        cout << a[i] << " ";
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // MAYOR A MENOR
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }
    cout << endl
         << "El arreglo ordenado de mayor a menor es: ";
    for (int i = 0; i < tamanio; i++)
    {
        cout << a[i] << " ";
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //SUMA DE ARREGLO
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    float suma;
    for (int i = 0; i < tamanio; i++)
    {
        suma += a[i];
    }
    cout << endl
         << "La suma de los items del arreglo son " << suma << endl;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //PROMEDIO
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    float promedio = suma / tamanio;
    cout << "El promedio del arreglo es: " << promedio;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //MEDIANA
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //para hallar la media necesitamos primero ordenar los datos por ello estos 2 for
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = 0; j < tamanio - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }

    //int mediana;
    //int mediana2;
    int mediana;

    //if (tamanio % 2 == 0)
    //{
    //   int i = tamanio / 2;
    //  mediana = i - 1;
    //mediana2 = i;
    //   cout << endl  << "la mediana es " << a[mediana] << " ;" << a[mediana2];
    //}
    //else{
        mediana = (tamanio - 1) / 2;//si es impar
        cout << endl
             << "La mediana es: " << a[mediana];
    //}
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //CAMBIAR EL VALOR MEDIO
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
a[mediana]=25;
cout << endl
     << "El nuevo valor del medio es: " << a[mediana];


return 0;
}
