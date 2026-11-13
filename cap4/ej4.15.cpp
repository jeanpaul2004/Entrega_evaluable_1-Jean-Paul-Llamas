#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int terminos = 200000;
    double pi = 0.0;
    double signo = 1.0;
    int primeraVez = 0;
    double valorPrimeraVez = 0.0;

    cout << "Precision: " << terminos << " terminos" << endl << endl;
    cout << "termino\tpi" << endl;
    cout << fixed << setprecision(8);

    for (int i = 1; i <= terminos; i++) {
        pi = pi + signo * 4.0 / (2 * i - 1);
        signo = -signo;

        cout << i << "\t" << pi << endl;

        // ver si empieza por 3.14159
        if (primeraVez == 0 && pi >= 3.14159 && pi < 3.14160) {
            primeraVez = i;
            valorPrimeraVez = pi;
        }
    }

    cout << endl << "Primer valor que empieza por 3.14159: termino " << primeraVez << endl;
    cout << "Valor exacto: " << setprecision(12) << valorPrimeraVez << endl;

    return 0;
}
