//Encuentra un elemento en un arreglo en C++
#include <iostream>

using namespace std;

main()
{

int i,g,a;
int Arry[6]={10,20,30,40,50};

a=0;

cout<<"Introduce un numero a buscar: "<<endl;
cin>>i;

for ( g = 0; g <=5; g++)
{
    
  if (i==Arry[g])
  {
    cout<<"El elemento esta en la posicion: "<<g<<endl;
    a++;
  }
  
}

if (!(a==1))
{
    cout<<"El elemento no se encuentra en el arreglo"<<endl;
}

return 0;

}