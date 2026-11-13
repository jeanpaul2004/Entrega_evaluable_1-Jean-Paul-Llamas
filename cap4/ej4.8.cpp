#include <iostream>
using namespace std;

int main() {
    int producto = 1;

    for (int i = 1; i <= 15; i = i + 2) {   // de 2 en 2 solo salen impares
        producto = producto * i;
    }

    cout << "Producto de los impares del 1 al 15: " << producto << endl;

    return 0;
}
