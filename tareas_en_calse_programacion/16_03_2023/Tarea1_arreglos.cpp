// declarar un arreglo de 5 productos y reemplazar el producto del arreglo 3
// por computadora, tambien imprimir arreglo
#include <iostream>
using namespace std;

int main()
{
    string productos[5] = {"laptop", "mouse", "reloj", "tablet", "teclado"};//creamos un arreglo con 5 productos    
    cout << "El producto inicial es: " << productos[3];//imprimimos el arreglo 3
    cout << endl;
    productos[3] = "computadora";//cambiamos el arreglo 3 por "computadora"
    cout << endl
         << "El nuevo producto es: " <<productos[3]<< endl;//imprimimos el arreglo 3 ya cambiado
    //creamos un for para imprimir el arreglo
    for (int i = 0; i < 5; i++)
    {
        cout <<"El valor del arreglo es ["<< i <<"] "<<productos[i]<<endl;
    }
    return 0;
}