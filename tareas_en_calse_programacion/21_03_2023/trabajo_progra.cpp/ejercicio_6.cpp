/*
Escribir un programa que lea una lista de palabras y las ordene alfabéticamente.
*/
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    // Creamos un arreglo de strings para almacenar las palabras
    const int MAX_NUM_PALABRAS = 100;
    string palabras[MAX_NUM_PALABRAS];

    // Leemos las palabras hasta que el usuario escriba "fin"
    int num_palabras = 0;
    string palabra;
    while (cin >> palabra && palabra != "fin" && num_palabras < MAX_NUM_PALABRAS) {
        palabras[num_palabras] = palabra;
        num_palabras++;
    }

    // Ordenamos el arreglo alfabéticamente
    sort(palabras, palabras + num_palabras, [](const string& a, const string& b) { return a < b; });

    // Imprimimos las palabras ordenadas
    for (int i = 0; i < num_palabras; i++) {
        cout << palabras[i] << " ";
    }
    cout << endl;

    return 0;
}
