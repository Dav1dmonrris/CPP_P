#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
  /*ACTIVIDAD: Crea un programa que contenga 2 vectores y luego muestre un vector que muestre los valores de los 2 vectores juntos*/
  int vector1[]{2,4,6,8}, Vector2[5], SumaVectores[10];

 //Muestra los primeros elementos del primer vector
  cout<<"Elementos del primer vector: ";
  

  for (int i = 0; i<5; i++)
  {

    cin>>Vector2[i];
    SumaVectores[i]=Vector2[i];
    
  }
 
  cout<<'[';

  for (int i = 5; i <10; i++)
  {

    SumaVectores[i]=vector1[i-5];

  }
  cout<<']';

  for (int i = 0; i < 10; i++)
  {
    cout<<"-->"<<SumaVectores[i]<<endl;
    
  }
  
 


  getch();
 return 0;

}