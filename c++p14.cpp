#include<iostream>
#include <conio.h>

using namespace std;

//Prototipo de funcion
int EncontrarMax(int x, int y);

main()
{
    int n1,n2;
    int Mayor;

    cout<<"Digite 2 numeros";
    cin>>n1>>n2;

    Mayor =EncontrarMax(n1,n2);
   
    cout<<"El mayor de los 2 numeros es: "<<Mayor<<endl;


 getch();
 return 0;

}

//Funcion
int EncontrarMax(int x, int y)
{
  int NumMax;

  if (x>y)
  {

    NumMax=x;

  }
  else
  {

    NumMax = y;
  
  }
  
  return NumMax;

}