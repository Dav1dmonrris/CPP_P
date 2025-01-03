#include <iostream>
using namespace std;

//Pasaje por valor
/*Esta funcion no afecta el valor original de main*/
void duplicarValor1(int num) {
    num *= 2;
    cout << "Dentro de la función (por valor): " << num << endl;
}

//pasaje por referencia
/*Esta Funcion afecta el valor original de main, entra directamente en la ubicacion en memoria de "num" y modifica su valor*/
void duplicarValor2(int& num) {
    num *= 2;
    cout << "Dentro de la función (por referencia): " << num << endl;
}


int main() {

//Pasaje por valor 
 /*   int num = 5;
    duplicarValor1(num);  // El valor de 'num' no se ve afectado
    cout << "Después de la función: " << num << endl;
*/
//Pasaje por referencia
    int num = 5;
    duplicarValor2(num);  // El valor de 'num' se ve afectado
    cout << "Después de la función: " << num << endl;

    return 0;


}
