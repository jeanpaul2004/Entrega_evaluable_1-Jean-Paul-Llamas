#include <iostream>
using namespace std;

void hanoi(int discos, int origen, int destino, int auxiliar);

int main() {
    int discos;

    cout << "Numero de discos: ";
    cin >> discos;

    while (discos < 1) {
        cout << "Tiene que haber al menos 1 disco: ";
        cin >> discos;
    }

    hanoi(discos, 1, 3, 2);

    return 0;
}

void hanoi(int discos, int origen, int destino, int auxiliar) {
    if (discos == 1) {   // caso base
        cout << origen << " -> " << destino << endl;
    }
    else {
        hanoi(discos - 1, origen, auxiliar, destino);   // los de arriba al auxiliar
        cout << origen << " -> " << destino << endl;    // el grande
        hanoi(discos - 1, auxiliar, destino, origen);   // los de arriba encima
    }
}
