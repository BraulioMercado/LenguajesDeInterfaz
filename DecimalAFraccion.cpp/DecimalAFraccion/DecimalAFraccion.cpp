#include <iostream>
#include <cstdlib>

using namespace std;
void DecimalAFraccion(float num);

int main() {
	float num;
	cout << "Ingresa un numero";
	cin >> num;
	DecimalAFraccion(num);
	return 0;
}

void DecimalAFraccion(float num)
{
	float a = 1;
	float b = 1;
	float aux = 1;
	while (!(aux==num))
	{
		aux = a / b;
		if (aux < num)
		{
			a++;
		}
		else if (aux > num)
		{
			a--;
			b++;
		}
	}
	cout << "Fraccion es: " << a << "/" << b;
}