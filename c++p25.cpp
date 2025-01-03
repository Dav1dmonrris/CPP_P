//Colas (Queues) en C++
#include <iostream>
#include <queue>  // Usamos la librería de C++ para colas
using namespace std;

int main() {
    queue<int> cola;

    // Insertar elementos en la cola
    cola.push(10);
    cola.push(20);
    cola.push(30);

    // Mostrar el elemento en el frente de la cola
    cout << "Elemento en el frente de la cola: " << cola.front() << endl;

    // Eliminar el elemento en el frente
    cola.pop();
    cout << "Elemento en el frente después de pop: " << cola.front() << endl;

    return 0;
}
