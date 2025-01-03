#include <iostream>
#include <conio.h>

using namespace std;
//First problem I solved

void Mult(float Num1, float Num2);

main()
{ 
  float Num1, Num2;

  cout<<"Add 2 numbers"<<endl;
  cin>>Num1>>Num2;

  //I call the function
  Mult(Num1, Num2);

 getch();
 return 0;

}


//Function Mult
void Mult(float Number1, float Number2)
{ 
 float Multiplication; 

  Multiplication=Number1*Number2;
  cout<<"The multiplication is: "<<Multiplication;

}

