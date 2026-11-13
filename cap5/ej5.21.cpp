#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();

int main() {
    srand(time(0));

    int caras = 0;
    int cruces = 0;

    for (int i = 1; i <= 100; i++) {
        if (flip() == 1) {
            cout << "Cara ";
            caras++;
        }
        else {
            cout << "Cruz ";
            cruces++;
        }

        if (i % 10 == 0) {
            cout << endl;
        }
    }

    cout << endl << "Caras: " << caras << endl;
    cout << "Cruces: " << cruces << endl;

    return 0;
}

// 0 = cruz, 1 = cara
int flip() {
    return rand() % 2;
}
