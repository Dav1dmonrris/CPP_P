#include<iostream>

using namespace std;
int main()
{
    int numero, numero2, suma=0, multiplicacion=0, division=0;
     
     //Entrada de datos
    cout<<"Digite un numero: "; cin>>numero;
    cout<<"Digite un segundo numero: "; cin>>numero2;

    //Formulas a utilizar
    suma= numero+numero2;
    multiplicacion= numero * numero2;
    division=numero/numero2;

    //Salida de datos
    cout<<"\n suma es: "<<suma<<endl;
    cout<<"\n multiplicacion es:"<<multiplicacion<<endl;
    cout<<"\n division es: "<<division<<endl;
    return 0;

}