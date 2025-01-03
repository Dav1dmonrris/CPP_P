//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
//INVIERTE LOS VALORES DE UN ARREGLO DE 5 ELEMENTOS
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
#include <iostream>
using namespace std;

main()
{

//Declaracion de variables
int Arry[6];

//Ingresa los elementos al arreglo
cout<<"Introduce 5 elementos para el arreglo: "<<endl;
for (int i = 0; i <=5; i++)
{
    cin>>Arry[i];
}

//Imprime los elementos del arreglo original
cout<<"Areglo original: "<<endl;
for (int i = 0; i <=5; i++)
{
    cout<<"["<<Arry[i]<<"]";

    //Salto de linea
    if(i==5){
    
    cout<<endl;

    }
}

//Imprime los elementos del arreglo en orden inverso
cout<<"Nuevo arreglo: "<<endl;
for (int i = 5; i>=0; i--)
{
    cout<<"["<<Arry[i]<<"]";
}

}