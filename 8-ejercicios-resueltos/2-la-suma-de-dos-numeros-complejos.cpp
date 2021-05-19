#include <iostream>

using namespace std;

int main (int argc, char** argv){
	// 2.- Diseñar el programa que me permita determinar la suma de dos (02) números complejos

		float real1, real2, imaginary1, imaginary2;
	
		cout << "ingrese el primer numero real" << endl;
		cin >> real1;
	
		cout << "ingrese ingrese el segundo numero real" << endl;
		cin >> real2;
	
		cout << "ingrese el primer numero imaginario" << endl;
		cin >> imaginary1;
	
		cout << "ingrese el segundo numero imaginario" << endl;
		cin >> imaginary2;
	
		float resultOfReal = real1 + real2;
		float resultOfImaginary = imaginary1 + imaginary2;
	
		cout << "la respuesta es: " << resultOfReal << " + " << resultOfImaginary << "i" << endl;

	
	system("PAUSE");
	return 0;
}
