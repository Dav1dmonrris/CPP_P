//Listas enlazadas en C++
#include <iostream>
using namespace std;

// Definir un nodo de la lista
struct Nodo {
    int valor;
    Nodo* siguiente;
};

// Función para imprimir la lista
void imprimirLista(Nodo* cabeza) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        cout << temp->valor << " ";
        temp = temp->siguiente;
    }
    cout << endl;
}

int main() {
    // Crear nodos
    Nodo* nodo1 = new Nodo{1, nullptr};
    Nodo* nodo2 = new Nodo{2, nullptr};
    Nodo* nodo3 = new Nodo{3, nullptr};

    // Enlazar los nodos
    nodo1->siguiente = nodo2;
    nodo2->siguiente = nodo3;

    // Imprimir la lista
    imprimirLista(nodo1);

    return 0;
}
