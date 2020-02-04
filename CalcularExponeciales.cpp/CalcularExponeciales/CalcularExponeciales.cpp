#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, base;
    cout << "Ingrese numero: " << endl;
    cin >> base;
    cout << "Ingrese exponente" << endl;
    cin >> n;
    int resultado = pow(base, n);
    cout << base << " elevado a la " << n << " es igual a " << resultado << endl;
    return 0;
}