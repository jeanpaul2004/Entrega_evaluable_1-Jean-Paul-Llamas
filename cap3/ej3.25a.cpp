#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Introduce un numero entero no negativo: ";
    cin >> n;

    while (n < 0) {
        cout << "Tiene que ser no negativo: ";
        cin >> n;
    }

    // mas de 20! ya no cabe
    if (n > 20) {
        cout << "Numero demasiado grande, el maximo es 20" << endl;
        return 0;
    }

    unsigned long long factorial = 1;
    int i = n;

    while (i > 1) {
        factorial = factorial * i;
        i--;
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
