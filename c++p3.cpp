#include <iostream>
#include <string>
using namespace  std;


class cclass
{
private:
  string nombre;
  string cuenta;
  double saldo;
  double TipoDeInteres;
//----------------------------------------
//CONSTRUCTOR
//----------------------------------------
public:  cclass()
{
  cout<<"Objeto creado en cclase \n";
}

//----------------------------------------
// Metodo asignar nombre, se asigna y regresa el nombre
//----------------------------------------

void asignarNombre(string nom)
{
  if (nom.length() ==0)
  {
    cout<<"Error: Cadena vacia\n";
    return;  
  }
  nombre=nom;
}
string ObtenerNombre(){
  return nombre;
}

//----------------------------------------
//Metodo asignar cuenta, asigna nombre a cuenta y retorna la cuenta.
//----------------------------------------

void asignarCuenta(string cue){
if (cue.length() ==0)
  {
    cout<<"Error: Cadena vacia\n";
    return;  
  }
  cuenta=cue;
}
string obtenerCuenta()
{
  return cuenta;
  }
double estado()
{
  return saldo;
}

//----------------------------------------
//
//----------------------------------------

void ingreso(double cantidad){
 if (cantidad<0)
 {
    cout<<"Error: Cadena vacia\n";
    return;  
  }
  saldo=saldo + cantidad;
}

//----------------------------------------
//
//----------------------------------------

void reintegro(double cantidad){
  if(saldo-cantidad<0){
    cout<<"Error: saldo no valido \n";
    return;  
  }
  saldo=saldo-cantidad;
}

//----------------------------------------
//
//----------------------------------------

void asignarTipoDeInteres(double tipo){
  if(tipo<0){
    cout<<"Error: Tipo no valido\n";
    return;  
  }
  TipoDeInteres= tipo;
}
double obtenerTipoDeInteres(){
return TipoDeInteres;
}

};

//----------------------------------------
//SUBCLASE DE Cclass
//----------------------------------------



//----------------------------------------
//Funcion main
//----------------------------------------
int main(){
cclass cuenta01;

cuenta01.asignarNombre("David");
cuenta01.asignarCuenta("cuenta3");
cuenta01.asignarTipoDeInteres(2.5);

cuenta01.ingreso(12000);
cuenta01.reintegro(3000);

cout<<cuenta01.ObtenerNombre()<<endl;
cout<<cuenta01.obtenerCuenta()<<endl;
cout<<cuenta01.estado()<<endl;
cout<<cuenta01.obtenerTipoDeInteres()<<endl;

return 0;
}