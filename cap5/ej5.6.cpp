#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n;

    n = 1 + rand() % 2;       // 1 a 2
    cout << "a) " << n << endl;

    n = 1 + rand() % 100;     // 1 a 100
    cout << "b) " << n << endl;

    n = rand() % 10;          // 0 a 9
    cout << "c) " << n << endl;

    n = 1000 + rand() % 113;  // 1000 a 1112
    cout << "d) " << n << endl;

    n = -1 + rand() % 3;      // -1 a 1
    cout << "e) " << n << endl;

    n = -3 + rand() % 15;     // -3 a 11
    cout << "f) " << n << endl;

    return 0;
}
