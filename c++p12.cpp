#include <iostream>
#include <conio.h>

using namespace std;

 //----------------------------------------------------------------------------
 //Estructura para Discos CD'S
 //----------------------------------------------------------------------------
 
  struct coleccion_CD {

  char titulo[30];
  char artista[25];
  int NumCanciones;
  float precio;
  char fecha_compra[20];
  
  }CD1,CD2,CD3;

  //----------------------------------------------------------------------------
  //Estructura para Personas
  //----------------------------------------------------------------------------

  struct Persona{

  char Nombre[30];
  int edad;
  
  } 

  Persona1={"David", 30},      //Variable de la estructura Persona con datos
  Persona2={"Alejandro", 15};  

  //----------------------------------------------------------------------------
  //Inicializa el programa
  //----------------------------------------------------------------------------

int main()
{ 
 cout<<"Estructura Personas"<<endl;
 cout<<"--------------------------------------------------------"<<endl;

 cout<<"Nombre 1: "<<Persona1.Nombre<<endl; //Imprime Nombre de persona 1
 cout<<"Edad 1: "<<Persona1.edad<<endl; 

 cout<<"Nombre 2: "<<Persona2.Nombre<<endl; //Imprime Nombre de persona 2
 cout<<"Edad 2: "<<Persona2.edad<<endl; 
 cout<<"--------------------------------------------------------"<<endl;

 //----------------------------------------------------------------------------
 //Agrega datos a la estructura Coleccion_CD
 //----------------------------------------------------------------------------

 cout<<"Titulo: ";
 cin.getline(CD1.titulo,30,'\n');//Agrega un titulo a la variable CD1

 cout<<"Precio: ";
 cin>>CD1.precio;//Agrega precio a la variable CD1

 //----------------------------------------------------------------------------
 //Imprime los datos de Coleccion_CD
 //----------------------------------------------------------------------------


 cout<<"Estructura Coleccion"<<endl;
 cout<<"--------------------------------------------------------"<<endl;

 cout<<"Titulo: "<<CD1.titulo<<endl;//Imprime el Titulo de la variable CD1
 cout<<"Precio: "<<CD1.precio<<endl;
 
 cout<<"--------------------------------------------------------"<<endl;


 getch();
 return 0; //Devuelve el valor 0 para finalizar el programa
 
}