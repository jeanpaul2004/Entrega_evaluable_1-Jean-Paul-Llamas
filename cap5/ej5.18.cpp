#include <iostream>
using namespace std;

int invertir(int numero);

int main() {
    int numero;

    cout << "Introduce un numero: ";
    cin >> numero;

    cout << "Invertido: " << invertir(numero) << endl;

    return 0;
}

int invertir(int numero) {
    int resultado = 0;

    while (numero != 0) {
        resultado = resultado * 10 + numero % 10;   // meto la ultima cifra
        numero = numero / 10;                        // y la quito
    }

    return resultado;
}
