#include <iostream>
#include <cmath>  // Para sqrt
#include <limits> // Para numeric_limits

using namespace std;

bool EcuacionCuadratica(double a, double b, double c, double& x1, double& x2) {
    // Comprobar si a es cero (no es una ecuación cuadrática)
    if (a == 0.0) {
        return false;
    }

    // Calcular el discriminante
    double discriminante = b * b - 4 * a * c;  

    // Imprimir el valor del discriminante
    cout << "Discriminante (delt) = " << discriminante << endl; //NO DEBE IMPRIMIR DENTRO DE LA FUNCION

    // Comprobar si el discriminante es negativo (no hay soluciones reales)
    if (discriminante < 0.0) {
        return false;
    }

    // Calcular las raíces
    if (discriminante == 0.0) {
        // Una solución real (raíz doble)
        x1 = -b / (2 * a);
        x2 = x1; // Ambas raíces son iguales
    } else {
        // Dos soluciones reales
        double sqrtDiscriminante = sqrt(discriminante);
        x1 = (-b + sqrtDiscriminante) / (2 * a);
        x2 = (-b - sqrtDiscriminante) / (2 * a);
    }

    return true;
}

int main() {
    double a, b, c;
    double x1 = numeric_limits<double>::quiet_NaN(); // Para inicializar con un valor no numérico
    double x2 = numeric_limits<double>::quiet_NaN(); // Para inicializar con un valor no numérico

    // Solicitar los coeficientes al usuario
    cout << "Ingrese los coeficientes a, b y c de la ecuación cuadrática (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    // Resolver la ecuación cuadrática
    if (EcuacionCuadratica(a, b, c, x1, x2)) {
        if (x1 == x2) {
            cout << "La ecuación tiene una solución real: x = " << x1 << endl;
        } else {
            cout << "La ecuación tiene dos soluciones reales: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    } else {
        cout << "La ecuación no tiene soluciones reales o no es una ecuación cuadrática válida." << endl;
    }

    return 0;
}
