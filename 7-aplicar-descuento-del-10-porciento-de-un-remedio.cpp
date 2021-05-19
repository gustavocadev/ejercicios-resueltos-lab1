#include <iostream>

using namespace std;

int main (int argc, char** argv){
/*
7. Una farmacia aplica al precio de los remedios el 10% de
descuento. Hacer un programa que ingresado el costo de los
medicamentos calcule el descuento y el precio final
*/
	int descount = 10;
	
	int cost;
	cout << "programa para calcular el descuento de un remedio" << endl;
	
	cout << "ingrese el costo" << endl;
	cin >> cost;
	
	int applyDescount = (0.1 * cost);
	int finalPrice = cost - applyDescount;
	
	
	cout << "el descuento aplicado es: " << applyDescount << " soles" << endl;
	cout << "el precio final es: " << finalPrice << " soles" << endl;

	
	system("PAUSE");
	return 0;
}
