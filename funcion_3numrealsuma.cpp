#include <iostream>

using namespace std;

// Función para calcular el promedio de tres números y devolver la sumatoria
double CalcularPromedioYSuma(double num1, double num2, double num3, double& sumatoria) {
    sumatoria = num1 + num2 + num3;
    return sumatoria / 3.0;
}

int main() {
    double a, b, c, suma;

    // Solicitar los tres números al usuario
    cout << "Ingrese tres números reales: ";
    cin >> a >> b >> c;

    // Calcular el promedio y la sumatoria
    double promedio = CalcularPromedioYSuma(a, b, c, suma);

    // Imprimir el promedio y la sumatoria
    cout << "La sumatoria de " << a << ", " << b << " y " << c << " es " << suma << endl;
    cout << "El promedio de " << a << ", " << b << " y " << c << " es " << promedio << endl;

    return 0;
}
