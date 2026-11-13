#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Introduce un numero de 4 cifras: ";
    cin >> numero;

    if (numero < 0 || numero > 9999) {
        cout << "El numero tiene que ser de 4 cifras" << endl;
        return 0;
    }

    // sacar cada cifra
    int d1 = numero / 1000;
    int d2 = (numero / 100) % 10;
    int d3 = (numero / 10) % 10;
    int d4 = numero % 10;

    // +7 y %10
    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    // cambio 1-3 y 2-4
    int aux = d1;
    d1 = d3;
    d3 = aux;

    aux = d2;
    d2 = d4;
    d4 = aux;

    cout << "Numero cifrado: " << d1 << d2 << d3 << d4 << endl;

    return 0;
}
