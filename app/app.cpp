#include <iostream>
using namespace std;

int main() {
  cout << "Hola, mundo!" << endl;

  funcionDeSoporte(0);

  return 0;
  funcion_1();
}

void funcion_1() {
  cout << "Hola, Diego!" << endl;
}

void funcionDeSoporte( int numero) {
    if( numero > 0) {
        cout << "Funcion de soporte: mayor a cero" << endl;
    } else if( numero == 0) {
        cout << "Funcion de soporte: igual a cero" << endl;
    }else {
        cout << "Funcion de soporte: menor a cero" << endl;
    }
}
