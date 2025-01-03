
//EL INICIO DE LOS PUNTEROS
#include <iostream>//Libreria

using namespace std;

int main ()
{

int num=10;

//Declaracion de un puntero a int
int* ptr = &num;

//Mostrar la direccion de memoria de 'num' y el valor al que apunta el puntero
cout<<"Direccion de memoria de num: "<< &num <<endl;
cout<<"Direccion almacenada en ptr: "<< ptr <<endl;
cout<<"Valor de num a traves del puntero: "<< *ptr <<endl;

return 0;

}