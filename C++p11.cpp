#include<iostream>
#include<conio.h>

using namespace std;

int main()//La matriz es o no simetrica??
{ 
  
   int Matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int MatrizTranspuesta[3][3], MatrizIgual[3][3];
   

   cout<<"Matriz Transpuesta: \n";
   for (int i = 0; i < 3; i++)
   {
    for (int p = 0; p < 3; p++)
    {
        MatrizTranspuesta[i][p]=Matriz1[i][p];
        cout<<MatrizTranspuesta[i][p];
        
    }
     cout<<"\n";
   }


   cout<<"Matriz igual: \n";
   for (int i = 0; i < 3; i++)
   {
    for (int p = 0; p < 3; p++)
    {
        MatrizIgual[i][p]=Matriz1[p][i];
        cout<<MatrizIgual[i][p];
        
    }
     cout<<"\n";
   }

   if (MatrizTranspuesta==MatrizIgual)
   {
    cout<<"'La matriz es simetrica' :)";
   }
   else{
     cout<<"'La matriz no es simetrica' :(";
   }
   

   
   
   
   
   
  getch();
  return 0;
}