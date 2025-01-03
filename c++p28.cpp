//EJERCICIO 28- Imprime los elementos de un arreglo de 6 elementos sin numeros repetidos
#include <iostream>
using namespace std;

int main() {

    int Arry[6];  
    int NumEstatico;

    cout << "Ingresa un arreglo de 6 elementos: " << endl;
    for (int i = 0; i < 6; i++) 
    {  // Correct loop condition
        cin >> Arry[i];

        if (i == 0) {
            NumEstatico = Arry[0];
        }
    }

    // Imprime los elementos del arreglo sin números repetidos
    cout << "Arreglo sin numeros repetidos: " << endl;
    for (int i = 0; i < 6; i++) {  
      
        bool UnicaVez = true;

        for (int j = 0; j < i; j++) {

            if (Arry[i] == Arry[j]) {

                UnicaVez = false;
                break;
            }
        }
        if (UnicaVez) {
            cout << "[" << Arry[i] << "]";
        }
    }

    return 0;
}