#include <iostream>
using namespace std;

int suma(int a, int b)//creamos una funcion llamada suma, para ello necesitamos a la variable a, b 
{
    int c = a + b;//creamos una variable c y le asignamos a+b
    return c;//retornamos la variable c que seria el resultado
}

int resta(int a, int b)//creamos una funcion llamada suma, para ello necesitamos a la variable a, b 
{
    int c = a - b;//creamos una variable c y le asignamos a=b
    return c;//retornamos la variable c que seria el resultado
}

int multiplicacion(int a, int b)//creamos una funcion llamada suma, para ello necesitamos a la variable a, b 
{
    int c = a * b;//creamos una variable c y le asignamos a*b
    return c;//retornamos la variable c que seria el resultado
}

int division(int a, int b)//creamos una funcion llamada suma, para ello necesitamos a la variable a, b 
{
    int c = a / b;//creamos una variable c y le asignamos a/b

    return c;//retornamos la variable c que seria el resultado
}

int main()
{
    cout << "ingrese una opcion: "<<endl;//imprimimos "ingrese una opcion"
    cout<<"1: Suma"<<endl;
    cout<<"2: Resta"<<endl;
    cout<<"3: Multiplicacion"<<endl;
    cout<<"4: Division"<<endl;
    //todas las opciones son las de arriba segun los numeros
    int opcion;
    int valor1 = 0, valor2 = 0, resultado = 0;
    cin >> opcion;//leemos cual opcion se eligio
   
    switch (opcion)//con respecto a la opcion seleccionada se ejecuta un determinado case
    {
    case 1: // si opcion = 1 se ejecuta esto
       cout<<"Ingrese el primer valor"<<endl;
       cin>>valor1;
       cout<<"Ingrese el segundo valor"<<endl;
       cin>>valor2;
        resultado = suma(valor1, valor2);
        cout << "El resultado de la suma es : " << resultado;

        break;
    case 2:// si opcion = 2 se ejecuta esto
        cout<<"Ingrese el primer valor"<<endl;
       cin>>valor1;
       cout<<"Ingrese el segundo valor"<<endl;
       cin>>valor2;
        resultado = resta(valor1, valor2);
        cout << "El resultado de la resta es : " << resultado;

        break;
    case 3:// si opcion = 3 se ejecuta esto
        cout<<"Ingrese el primer valor"<<endl;
       cin>>valor1;
       cout<<"Ingrese el segundo valor"<<endl;
       cin>>valor2;
        resultado = multiplicacion(valor1, valor2);
        cout << "El resultado de la multiplicacion es : " << resultado;

        break;
        ;
    case 4:// si opcion = 4 se ejecuta esto
        cout<<"Ingrese el primer valor"<<endl;
       cin>>valor1;
       cout<<"Ingrese el segundo valor"<<endl;
       cin>>valor2;
        resultado = division(valor1, valor2);
        cout << "El resultado de la division es : " << resultado;

        break;
    default:// si opcion no es ningun case se ejecuta esto
        cout << "opcion no valida";
        break;
    }
    return 0;
}
