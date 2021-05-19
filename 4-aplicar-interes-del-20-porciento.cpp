#include <iostream>

using namespace std;

int main (int argc, char** argv){
	/* 
4) Escribe un programa que lea una cantidad depositada en
un banco y que calcule la cantidad final después de aplicarle
un 20% de interés.
*/
	cout << "programa para calcular el interes de un monto" << endl;

	int amountDeposited;
	cout << "ingresa el monto a depositar" << endl;
	cin >> amountDeposited;
	
	float applyInterest = 0.2 * amountDeposited;

	int finalAmount = amountDeposited + applyInterest;
	
	cout << "el interes es: " << applyInterest << " soles" << endl;
	cout << "la cantidad final a pagar es: " << finalAmount << " soles" << endl;
	
	system("PAUSE");
	return 0;
}
