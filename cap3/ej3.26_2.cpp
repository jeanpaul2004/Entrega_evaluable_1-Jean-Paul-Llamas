#include <iostream>
using namespace std;

int main() {
    int cifrado;

    cout << "Introduce el numero cifrado: ";
    cin >> cifrado;

    if (cifrado < 0 || cifrado > 9999) {
        cout << "El numero tiene que ser de 4 cifras" << endl;
        return 0;
    }

    int d1 = cifrado / 1000;
    int d2 = (cifrado / 100) % 10;
    int d3 = (cifrado / 10) % 10;
    int d4 = cifrado % 10;

    // deshacer el cambio
    int aux = d1;
    d1 = d3;
    d3 = aux;

    aux = d2;
    d2 = d4;
    d4 = aux;

    // +3 para quitar el +7
    d1 = (d1 + 3) % 10;
    d2 = (d2 + 3) % 10;
    d3 = (d3 + 3) % 10;
    d4 = (d4 + 3) % 10;

    cout << "Numero original: " << d1 << d2 << d3 << d4 << endl;

    return 0;
}
