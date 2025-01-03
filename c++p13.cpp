#include<iostream>
#include <cstdlib> 
#include<string.h>

using namespace std;

//#include <cstdlib>  // Para usar system()
//system("cls");  // En Windows

//-----------------------------------------------------------------
//Estructura Corredor
//-----------------------------------------------------------------

struct Corredor
{

 char nombre[25];
 int Edad;
 char Sexo[10];
 char Club[20];

}C1;

//Inicia el programa

int main()
{ 
    char categoria[10];

    //-----------------------------------------------------------------
    //Ingresa datos para la estructura
    //-----------------------------------------------------------------

    cout<<"Nombre: ";
    cin.getline(C1.nombre, 25);

    cout<<"Edad: ";
    cin>>C1.Edad;

    //Funcion para limpiar el buffer
    fflush(stdin);
 

    cout<<"Sexo (F / M): ";
    cin.getline(C1.Sexo, 10);

    cout<<"Club: ";
    cin.getline(C1.Club, 20);

    //-----------------------------------------------------------------
    //Lo coloca en una categoria acorde a su edad.
    //-----------------------------------------------------------------

    if (C1.Edad,25 <=18)
    {

        strcpy(categoria,"Juvenil");

    }
    else if (C1.Edad,25 <= 40)
    {

        strcpy(categoria,"Señor");

    }
    else if (C1.Edad,25 < 40)
    {

       strcpy(categoria,"Veterano");

    }

    //-----------------------------------------------------------------
    //Imprime los datos digitalizados.
    //-----------------------------------------------------------------

    cout<<"-----------------------------------"<<endl;    
    cout<<"Datos del participante"<<endl;
    cout<<"-----------------------------------"<<endl;

    cout<<C1.nombre<<endl;
    cout<<C1.Edad<<endl;
    cout<<C1.Sexo<<endl;
    cout<<C1.Club<<endl;

    cout<<"-----------------------------------"<<endl;
    cout<<"Tu calificaste para: "<<categoria<<endl;
    cout<<"-----------------------------------"<<endl;
    
    std::cin.get();

}