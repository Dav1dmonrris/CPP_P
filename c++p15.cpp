#include<iostream>
#include <conio.h>

using namespace std;

//Plantillas de funciones
template <class TIPOD>
void MostrarAbs(TIPOD Numero);

main()
{
 int N1=34;
 float N2=3.5;
 double N3=35.666;

 MostrarAbs(N1);
 MostrarAbs(N2);
 MostrarAbs(N3);

 getch();
 return 0;

}

template <class TIPOD>
void MostrarAbs(TIPOD Numero){
if (Numero<0)
{
    Numero=Numero*-1;
}

cout<<"El numero es: "<<Numero<<endl;

}