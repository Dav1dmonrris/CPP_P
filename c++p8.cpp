#include <iostream>
#include<conio.h>

using namespace std;

int main()//Crear los numeros fibonacci
{

  int Numero1[5], resultado,i;
  
  cout<<"¿Cuantos numeros tendra el arreglo?";
  cin>>resultado;

  for ( i = 0; i < resultado; i++)
  {
    cout<<"Digite un numero";
    cin>>Numero1[i];
    
  }
  
  for ( i = 0; i < resultado; i++)
  {
    
    cout<<i<<"-->"<<Numero1[i]<<endl;

  }
  
 
  return 0;
}