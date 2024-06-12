#include <iostream>

using namespace std;

// Función para calcular el promedio de tres números
double CalcularPromedio(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    double a, b, c;

    // Solicitar los tres números al usuario
    cout << "Ingrese tres números reales: ";
    cin >> a >> b >> c;

    // Calcular el promedio
    double promedio = CalcularPromedio(a, b, c);

    // Imprimir el promedio
    cout << "El promedio de " << a << ", " << b << " y " << c << " es " << promedio << endl;

    return 0;
}
