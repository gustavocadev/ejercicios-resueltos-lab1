#include <iostream>

using namespace std;

int main (int argc, char** argv){
	
/*
DISEÑAR UN PROGRAMA QUE ME PERMITA DETERMINAR EL NUMERO INVERTIDO DE UN 
NUMERO DE 3 DIGITOS 
*/

	 int number;
	 
	 cout << "ingresa un numero de 3 digitos para invertirlo" << endl;
	 cin >> number;
	 
	 const int unit = (number % 10);
	
	 const int ten = (number / 10) % 10;
	
	 const int hundred = number / 100;
	 
	 const int finalResult = unit * 100 + ten * 10 + hundred;
	
	 cout << "el numero invertido es: " << finalResult << endl;
	
	system("PAUSE");
	return 0;
}
