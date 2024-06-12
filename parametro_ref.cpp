// parametro por diferencia 
#include<iostream>
using namespace std;

int FuncionPasosReferencias(int& num)
{
    num = num * 10;
    cout<<endl<<"El valor de num dentro de la funcion: "<<num;
    return 1;

}
//funcion retorna valores pero no intercambia los valores
// 2 variables a=20 b=20 
//a sea = a 20 y b sea = 10
void Intercambio(int& A, int& B)
{
    int AUX = A;
    A = B;
    B= AUX;
}


int main()

{
    int p=2;
    cout<<endl<<"El valor de num antes de la llamada: "<<p;
    FuncionPasosReferencias(p);
    cout<<endl<<"El valor de num despues de la llamada: "<<p;

    int num1=10, num2=20;
    Intercambio(num1, num2);
    cout<<endl<<"num1 = "<< num1;
    cout<<endl<<"num2 = "<< num2;

    return 0;

}