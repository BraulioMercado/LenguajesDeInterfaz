#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
    int a;
    int absoluto;
    cout << "Ingrese un numero" << endl;
    cin >> a;
    absoluto = abs(a);
    cout << "El absoluto es " << absoluto;
    return 0;
}