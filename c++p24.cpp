//Pilas (Stacks)
#include <iostream>
#include <stack>  // Usamos la librería de C++ para pilas
using namespace std;

int main() {
    stack<int> pila;

    // Insertar elementos en la pila
    pila.push(20);
    pila.push(30);
    pila.push(10);

    // Mostrar el elemento en la parte superior
    cout << "Elemento en la parte superior de la pila: " << pila.top() << endl;

    // Eliminar el elemento en la parte superior
    pila.pop();
    cout << "Elemento en la parte superior después de pop: " << pila.top() << endl;

    return 0;
}
