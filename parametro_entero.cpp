#include <iostream>
using namespace std;

// Función para calcular el cubo de un número entero
int CalcularCubo(int num) {
    return num * num * num;
}

int main() {
    int numero;

    // Solicitar un número al usuario
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Calcular el cubo del número
    int cubo = CalcularCubo(numero);

    // Imprimir el cubo del número
    cout << "El cubo de " << numero << " es " << cubo << endl;

    return 0;
}
