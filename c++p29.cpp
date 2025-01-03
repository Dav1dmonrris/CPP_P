//Listas enlazadas
#include <iostream>
using namespace std;

struct Nodos {

    int Valor;
    Nodos* SiguienteNum;

};

void ImprimirLista(Nodos* Cabeza){
   
   Nodos* Temp= Cabeza;

    while (Temp!=nullptr){
    
    cout<<Temp->Valor<<" ";
    Temp = Temp->SiguienteNum;
    
    }
}

main()
{

Nodos* Nodo = new Nodos{1 , nullptr};
Nodos* Nodo2 = new Nodos{2 , nullptr};
Nodos* Nodo3 = new Nodos{3 , nullptr};
Nodos* Nodo4 =new Nodos{4 , nullptr};

Nodo->SiguienteNum = Nodo2;
Nodo2->SiguienteNum = Nodo3;
Nodo3->SiguienteNum = Nodo4;

ImprimirLista(Nodo);


}