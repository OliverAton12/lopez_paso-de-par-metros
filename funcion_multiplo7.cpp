#include <iostream>

using namespace std;

// Función para determinar si un número es múltiplo de 7
bool EsMultiploDeSiete(int num) {
    return num % 7 == 0;
}

int main() {
    int numero;

    // Solicitar un número al usuario
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Determinar si el número es múltiplo de 7
    if (EsMultiploDeSiete(numero)) {
        cout << "El número " << numero << " es múltiplo de 7." << endl;
    } else {
        cout << "El número " << numero << " no es múltiplo de 7." << endl;
    }

    return 0;
}
