//REFERENCIAS
#include <iostream>
using namespace std;

void cambiarValor(int& ref) {
    ref = 50;  // Modifica el valor de la variable original
}

int main() {
    int num = 10;

    cout << "Valor antes de cambiar: " << num << endl;

    cambiarValor(num);  // Pasa la variable como referencia

    cout << "Valor después de cambiar: " << num << endl;

    return 0;
}
