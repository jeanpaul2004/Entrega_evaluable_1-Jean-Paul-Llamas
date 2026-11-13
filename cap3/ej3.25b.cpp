#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int terminos;

    cout << "Numero de terminos: ";
    cin >> terminos;

    double e = 1.0;
    double factorial = 1.0;
    int i = 1;

    while (i < terminos) {
        factorial = factorial * i;   // uso el factorial de antes
        e = e + 1.0 / factorial;
        i++;
    }

    cout << fixed << setprecision(15);
    cout << "e = " << e << endl;

    return 0;
}
