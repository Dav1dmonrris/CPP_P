//EXCEPCIONES
#include <iostream>
#include <stdexcept>  // Necesario para las excepciones estándar
using namespace std;

int dividir(int a, int b) {
    if (b == 0) {
        throw runtime_error("¡Error! División por cero.");
    }
    return a / b;
}

int main() {
    try {
        cout << "Resultado: " << dividir(10, 0) << endl;  // Intentamos dividir por cero
    } catch (const runtime_error& e) {
        cout << "Excepción capturada: " << e.what() << endl;
    }

    return 0;
}
