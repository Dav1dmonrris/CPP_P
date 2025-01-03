#include <iostream>

using namespace std;

int main()
{
  //Se declaran las variables
  float a, b, resultado =0;

  //Entrada de datos
  cout<<"Digite el valor de a";cin>>a;
  cout<<"Digite el valor de b";cin>>b;

  //formula
  resultado=(a/b)+1;

  //Simplifica los decimales de la respuesta a 2 decimales despues del punto
  cout.precision(2);

  //salida de datos 
  cout<<"\n El resultado es: "<<resultado<<endl;


  return 0;
}