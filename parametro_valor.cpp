#include <iostream>
using namespace std;

// Función que toma un parámetro por valor
int FuncionPasoporValor(int num)
{
    num = num * 10;
    cout << endl << "El valor de la variable num dentro de la funcion: " << num;
    return 1;
}

int main()
{
    int num = 2;
    cout << endl << "El valor de la variable num es antes de la llamada: " << num;
    FuncionPasoporValor(num);
    cout << endl << "El valor de la variable num es despues de la llamada: " << num;
    return 0;
}
