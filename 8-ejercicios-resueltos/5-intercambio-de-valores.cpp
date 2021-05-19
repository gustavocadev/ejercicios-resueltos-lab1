#include <iostream>

using namespace std;

int main (int argc, char** argv){
	
//	5.- Diseñar un programa que me permita leer dos números y proceda a intercambiar sus valores.
	
	double value1, value2;
	
	cout << "ingrese el primer valor" << endl;
	cin >> value1;

	cout << "ingrese el segundo valor" << endl;
	cin >> value2;
	
	const int aux = value1;
	
	value1 = value2;
	value2 = aux;
	
	cout << "el valor 1 es: " << value1 << endl;
	cout << "el valor 2 es: " << value2 << endl;
	
	system("PAUSE");
	return 0;
}
