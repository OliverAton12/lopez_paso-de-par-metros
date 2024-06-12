#include<iostream>
using namespace std;

string saludos()
{
    return "bienvenidos....";
}
string saludos(string nombre)
{
    return "bienvenidos " + nombre;
}
string saludos(string nombre, int edad)
{
    if(edad >=  18)
      return "bienvenidos señor " + nombre;
    else
      return "Bienvenido joven  " + nombre;

}


int main()
{
    cout<<endl<<saludos();
    cout<<endl<<saludos("juan");
    cout<<endl<<saludos("juan perez", 18);

    string nombre= " jose alcivar  ";
    cout<<endl<<saludos(nombre, 16);
    

    return 0;
}