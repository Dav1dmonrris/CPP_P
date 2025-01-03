#include <iostream>
using namespace std;

// Definición de la estructura Nodo
struct Nodo {

    int valor;
    Nodo* siguiente;

    // Constructor del nodo
    Nodo(int val) 
    {
        valor = val;
        siguiente = nullptr;

    }
};

// Clase para las listas enlazadas
class ListaEnlazada {
private:
    Nodo* cabeza;

public:
    // Constructor de la lista (inicializa la cabeza como nullptr)
    ListaEnlazada() {
        cabeza = nullptr;
    }

    // Método para agregar un nodo al final
    void agregarAlFinal(int valor) 
    {
        Nodo* nuevoNodo = new Nodo(valor);  // Crear el nuevo nodo

        // Si la lista está vacía, el nuevo nodo será la cabeza
        if (cabeza == nullptr) 
        {
            cabeza = nuevoNodo;
        } 
        else
        {

            // Si la lista no está vacía, recorremos hasta el último nodo
            Nodo* nodoActual = cabeza;

            while (nodoActual->siguiente != nullptr)
            {
                nodoActual = nodoActual->siguiente;
            }

            // Enlazamos el último nodo con el nuevo nodo
            nodoActual->siguiente = nuevoNodo;
        }
    }

    // Método para imprimir la lista
    void imprimirLista() 
    {
        Nodo* nodoActual = cabeza;

        while (nodoActual != nullptr) 
        {
            cout << nodoActual->valor << " -> ";
            nodoActual = nodoActual->siguiente;
        }

        cout << "Vacío" << endl;  // Indica el final de la lista
    }

};

//Inicia el programa
int main() {
    ListaEnlazada lista;

    // Agregar nodos al final de la lista
    lista.agregarAlFinal(5);
    lista.agregarAlFinal(10);
    lista.agregarAlFinal(15);

    // Imprimir la lista
    lista.imprimirLista();

    return 0;
}
