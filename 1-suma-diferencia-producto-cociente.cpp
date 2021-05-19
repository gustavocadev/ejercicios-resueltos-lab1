#include <iostream>

using namespace std;

int main (int argc, char** argv){
/*
1) Escribir un programa que lea dos números por
teclado y escriba su suma, diferencia, producto y
cociente.
*/

 cout << "programa para calcular la suma, diferencia, producto y cociente de dos numeros" << endl;
 int number1;
 int number2;

 cout << "escribe el primer numero: " << endl;
 cin >> number1;

 cout << "escribe el segundo numero: " << endl;
 cin >> number2;

 int add = number1 + number2;
 int subtraction = number1 - number2;
 int multiply = number1 * number2;
 float divide = number1 / number2;

 cout << "la suma es: " << add << endl;
 cout << "la resta es: " << subtraction << endl;
 cout << "la multiplicacion es: " << multiply << endl;
 cout << "la division es: " << divide << endl;
	
	system("PAUSE");
	return 0;
}
