#include <iostream>

using namespace std;

int main (int argc, char** argv){
	
/* 
	6.Diseñar el algoritmo que me permita leer tres números enteros de un Digito y almacenarlos en una sola 
	variable que contenga a esos tres dígitos Por ejemplo si A=5 y B=6 y C=2 entonces X=562. 
*/
	
	int unit, ten, hundred;
	
	cout << "ingrese el primer numero" << endl;
	cin >> unit;

	cout << "ingrese el segundo numero" << endl;
	cin >> ten;
	
	cout << "ingrese el tercer numero" << endl;
	cin >> hundred;
	
	const int finalResult = (hundred * 100) + ( ten * 10) + unit;
	
	cout << "los variables juntas son: " << finalResult << endl;
	
	system("PAUSE");
	return 0;
}
