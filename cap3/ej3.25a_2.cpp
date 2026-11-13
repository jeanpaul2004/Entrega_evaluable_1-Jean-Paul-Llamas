#include <iostream>
using namespace std;

int main() {
    int n;
    int cifras[200] = {0};   // el numero al reves, cifras[0] son las unidades
    int tam = 1;             // cuantas cifras tiene

    cout << "Introduce un numero entero no negativo (max 100): ";
    cin >> n;

    while (n < 0 || n > 100) {
        cout << "Tiene que estar entre 0 y 100: ";
        cin >> n;
    }

    cifras[0] = 1;
    int i = 2;

    while (i <= n) {
        // multiplicar por i cifra a cifra
        int llevo = 0;
        int j = 0;

        while (j < tam) {
            int x = cifras[j] * i + llevo;
            cifras[j] = x % 10;
            llevo = x / 10;
            j++;
        }

        // lo que sobra son cifras nuevas
        while (llevo > 0) {
            cifras[tam] = llevo % 10;
            llevo = llevo / 10;
            tam++;
        }

        i++;
    }

    cout << n << "! = ";

    int k = tam - 1;
    while (k >= 0) {
        cout << cifras[k];
        k--;
    }

    cout << endl;

    return 0;
}
