//MEMORIA DINAMICA
#include <iostream>
using namespace std;

int main() {
    // Asignar memoria dinámica para un entero
    int* ptr = new int;

    // Asignar valor a la memoria dinámica
    *ptr = 20;

    // Mostrar el valor almacenado en la memoria dinámica
    cout << "Valor de la memoria dinámica: " << *ptr << endl;

    // Liberar la memoria dinámica
    delete ptr;

    return 0;
}
