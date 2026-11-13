#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double horas);

int main() {
    double horas[3];
    double cobro[3];
    double totalHoras = 0;
    double totalCobro = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Horas del coche " << i + 1 << ": ";
        cin >> horas[i];

        cobro[i] = calculateCharges(horas[i]);
        totalHoras = totalHoras + horas[i];
        totalCobro = totalCobro + cobro[i];
    }

    cout << fixed;
    cout << endl << "Coche\tHoras\tCobro" << endl;

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "\t" << setprecision(1) << horas[i] << "\t";
        cout << setprecision(2) << cobro[i] << endl;
    }

    cout << "TOTAL\t" << setprecision(1) << totalHoras << "\t";
    cout << setprecision(2) << totalCobro << endl;

    return 0;
}

double calculateCharges(double horas) {
    double cobro = 20.0;

    if (horas > 3) {
        // ceil redondea la hora hacia arriba
        cobro = cobro + 5.0 * ceil(horas - 3);
    }

    if (cobro > 50.0) {
        cobro = 50.0;
    }

    return cobro;
}
