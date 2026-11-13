#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x;
    int terminos;

    cout << "Valor de x: ";
    cin >> x;
    cout << "Numero de terminos: ";
    cin >> terminos;

    double resultado = 1.0;
    double potencia = 1.0;
    double factorial = 1.0;
    int i = 1;

    while (i < terminos) {
        potencia = potencia * x;
        factorial = factorial * i;
        resultado = resultado + potencia / factorial;
        i++;
    }

    cout << fixed << setprecision(10);
    cout << "e^x con la serie = " << resultado << endl;
    cout << "exp(x) de cmath  = " << exp(x) << endl;

    return 0;
}
